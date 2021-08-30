//
//  RegistTcpServer.m
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import "RegistTcpServer.h"
#import "DDTcpClientManager.h"

#if __TEAMTALK_REGIST__

static NSInteger timeoutInterval = 10;

@interface RegistTcpServer(notification)

- (void)n_receiveTcpLinkConnectCompleteNotification:(NSNotification*)notification;
- (void)n_receiveTcpLinkConnectFailureNotification:(NSNotification*)notification;

@end

@implementation RegistTcpServer {
    
    ClientSuccess  _success;
    ClientFailure  _failure;
    BOOL           _connecting;
    NSUInteger     _connectTimes;
}

- (id)init {
   
   int                            nErr                                     = EFAULT;
   
   __TRY;
   
   self = [super init];
   
   if (self) {
      
      _connecting    = NO;
      _connectTimes  = 0;
      
      [[NSNotificationCenter defaultCenter] addObserver:self
                                               selector:@selector(n_receiveTcpLinkConnectCompleteNotification:)
                                                   name:DDNotificationTcpLinkConnectComplete
                                                 object:nil];
      
      [[NSNotificationCenter defaultCenter] addObserver:self
                                               selector:@selector(n_receiveTcpLinkConnectFailureNotification:)
                                                   name:DDNotificationTcpLinkConnectFailure
                                                 object:nil];
      
   }
   
   __CATCH(nErr);
   
   return self;
}

- (void)registTcpServerIP:(NSString*)aIP port:(NSInteger)aPort success:(void(^)())aSuccess failure:(void(^)())aFailure {
   
   int                            nErr                                     = EFAULT;
   
   __TRY;
   
   if (!_connecting) {
      
      _connectTimes ++;
      _connecting = YES;
      
      _success    = [aSuccess copy];
      _failure    = [aFailure copy];
      
      [[DDTcpClientManager instance] disconnect];
      [[DDTcpClientManager instance] connect:aIP port:aPort status:1];
      
      //超时处理
      NSUInteger   nowTimes       = _connectTimes;
      double       delayInSeconds = timeoutInterval;
      dispatch_time_t  popTime    = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
      dispatch_after(popTime, dispatch_get_main_queue(), ^(void) {
         
         if (_connecting && nowTimes == _connectTimes) {
            
            _connecting = NO;
            _failure(nil);
         }
      });
   }
   
   __CATCH(nErr);
   
   return;
}

- (void)dealloc {
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:DDNotificationTcpLinkConnectComplete object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:DDNotificationTcpLinkConnectFailure object:nil];
    
    return;
}

#pragma mark - notification
- (void)n_receiveTcpLinkConnectCompleteNotification:(NSNotification*)notification {
    
    if(_connecting) {
        
        _connecting = NO;
        dispatch_async(dispatch_get_main_queue(), ^{
            _success();
        });
    }
    
    return;
}

- (void)n_receiveTcpLinkConnectFailureNotification:(NSNotification*)notification {
    
    if (_connecting) {
        
        _connecting = NO;
        dispatch_async(dispatch_get_main_queue(), ^{
            _failure(nil);
        });
    }
}

@end

#endif /* __TEAMTALK_REGIST__ */
