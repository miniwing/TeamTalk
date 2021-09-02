//
//  DDRegistManager.m
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import "RegistModule.h"
#import "RegistHttpServer.h"
#import "RegistMsgServer.h"
#import "RegistTcpServer.h"
#import "SpellLibrary.h"
#import "DDUserModule.h"
#import "MTTUserEntity.h"
#import "DDClientState.h"
#import "RuntimeStatus.h"
#import "ContactsModule.h"
#import "MTTDatabaseUtil.h"
#import "DDAllUserAPI.h"
#import "DDAllFriendAPI.h"
#import "MTTNotification.h"
#import "SessionModule.h"
#import "DDGroupModule.h"
#import "MTTUtil.h"

#if __TEAMTALK_REGIST__

@interface RegistModule (privateAPI)

- (void)p_loadAfterHttpServerWithToken:(NSString*)token
                                userID:(NSString*)userID
                                   dao:(NSString*)dao
                              password:(NSString*)password
                                 uname:(NSString*)uname
                               success:(void(^)(MTTUserEntity* aLoginedUser))success failure:(void(^)(NSString* aError))failure;

@end

@implementation RegistModule {
    
    NSString   * _dao;
    NSString   * _priorIP;
    NSInteger    _port;
}

+ (instancetype)instance {
   
   static dispatch_once_t   onceToken;
   static RegistModule     *g_RegistModule   = nil;
   
   dispatch_once(&onceToken, ^{
      
      g_RegistModule = [[RegistModule alloc] init];
   });
   
   return g_RegistModule;
}

- (id)init {
    
    self = [super init];
    
    if (self) {
        
        _httpServer = [[RegistHttpServer alloc] init];
        _msgServer  = [[RegistMsgServer alloc] init];
        _tcpServer  = [[RegistTcpServer alloc] init];

    } /* End if () */
    
    return self;
}


#pragma mark Public API

/// 注册
/// @param name 用户名
/// @param password 密码
/// @param success 成功回调
/// @param failure 失败回调
- (void)registWithUsername:(NSString*)aName
                  password:(NSString*)aPassword
                   success:(void(^)(MTTUserEntity* loginedUser))success
                   failure:(void(^)(NSString* error))failure {
   
   [_httpServer getMsgIp:^(NSDictionary *aDictionary) {
      
      LogDebug((@"-[RegistModule registWithUsername:password:success:failure:] : getMsgIp : %@", aDictionary));
      
      NSInteger code  = [[aDictionary objectForKey:@"code"] integerValue];
      
      if (code == 0) {
         _priorIP = [aDictionary objectForKey:@"priorIP"];
         
#if __TEAMTALK_HARRY__
         if ([_priorIP isEqualToString:@"10.211.55.13"]) {
            
            _priorIP = __TEAMTALK_HOST__;
            
         } /* End if () */
#endif /* __TEAMTALK_HARRY__ */
         
         _port    =  [[aDictionary objectForKey:@"port"] integerValue];
         
         [MTTUtil setMsfsUrl:[aDictionary objectForKey:@"msfsPrior"]];
         
         [_tcpServer registTcpServerIP:_priorIP
                                  port:_port
                               success:^{
            
            [_msgServer registUserName:aName
                              password:aPassword
                               success:^(id aObject) {
               
               LogDebug((@"[RegistModule registWithUsername:password:success:failure:] : success : Object : %@", aObject));
               
               if (success) {
                  
                  success(aObject);
                  
               } /* End if () */
            }
                               failure:^(NSError *aError) {
               
               LogDebug((@"[RegistModule registWithUsername:password:success:failure:] : failure : Error : %@", aError));
               
               if (failure) {
                  
                  failure(aError.domain);
                  
               } /* End if () */

            }];
         }
                               failure:^{
            debugLog(@"连接消息服务器失败");
            failure(@"连接消息服务器失败");
            
         }];
      }
   }
                 failure:^(NSString *error) {
      debugLog(@"%@", error.description);
      failure(@"连接消息服务器失败");
   }];
   
}

@end

#endif /* __TEAMTALK_REGIST__ */
