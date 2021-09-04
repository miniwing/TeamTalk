//
//  RegistMsgServer.m
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import "RegistMsgServer.h"
#import "DDTcpClientManager.h"

#import "RegistAPI.h"

#import "IMBaseDefine.pb.h"
#import "IMRegist.pb.h"

#if __TEAMTALK_REGIST__

static int const timeOutTimeInterval = 10;

typedef void(^CheckSuccess)(id object);
typedef void(^CheckFailure)(NSError* error);

@interface RegistMsgServer(PrivateAPI)

- (void)n_receiveLoginMsgServerNotification:(NSNotification*)notification;
- (void)n_receiveLoginLoginServerNotification:(NSNotification*)notification;

@end

@implementation RegistMsgServer {
    
    CheckSuccess _success;
    CheckFailure _failure;
    
    BOOL _connecting;
    NSUInteger _connectTimes;
}

- (id)init {
    
    self = [super init];
    
    if (self) {
        
        _connecting = NO;
        _connectTimes = 0;
//        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(n_receiveLoginMsgServerNotification:) name:notificationLoginMsgServerSuccess object:nil];
    }
    return self;
}

- (void)registUserName:(NSString*)aUserName
              password:(NSString *)password
               success:(void(^)(id object))success
               failure:(void(^)(id object))failure {
    
   int                            nErr                                     = EFAULT;
   
   __TRY;

   if (!_connecting) {
      
      NSNumber    *clientType    = @(ClientTypeClientTypeIos);
      NSString    *clientVersion = [NSString stringWithFormat:@"MAC/%@-%@",[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"],[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]];
      NSArray     *parameter     = @[aUserName, password, clientVersion, clientType];
      
      RegistAPI   *stRegistAPI   = [[RegistAPI alloc] init];
      
      [stRegistAPI requestWithObject:parameter Completion:^(id response, NSError *error) {
         
         LogDebug((@"%@", response));
         LogDebug((@"%@", error.description));
         
         if (!error) {
            
            if (response) {
               
               NSInteger code =[response[@"result"] integerValue];
               
               if (RegistResultRegistResultNoError != code) {

                  debugLog(@"resultString : %@", response[@"resultString"]);
                  NSError *error1 = [NSError errorWithDomain:response[@"resultString"] code:code userInfo:nil];
                  failure(error1);
               }
               else {
                  NSString *resultString =response[@"resultString"];
                  
                  if (resultString == nil) {
                     
                     success(response);
                  }
               }
            }
         }
         else {
            
            DDLog(@"error:%@",[error domain]);
            
            failure(error);
         }
      }];
   }
   
   __CATCH(nErr);
   
   return;
}

@end

#endif /* __TEAMTALK_REGIST__ */
