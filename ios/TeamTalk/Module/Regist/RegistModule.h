//
//  RegistRegistModule.h
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __TEAMTALK_REGIST__

@class RegistHttpServer;
@class RegistMsgServer;
@class RegistTcpServer;
@class MTTUserEntity;

@interface RegistModule : NSObject {
    
    RegistHttpServer    * _httpServer;
    RegistMsgServer     * _msgServer;
    RegistTcpServer     * _tcpServer;
}

@property (nonatomic,readonly)NSString* token;

+ (instancetype)instance;

/**
 *  注册接口，整个注册流程
 *
 *  @param name     用户名
 *  @param password 密码
 */
- (void)registWithUsername:(NSString*)name
                  password:(NSString*)password
                   success:(void(^)(MTTUserEntity* user))success
                   failure:(void(^)(NSString* error))failure;

@end

#endif /* __TEAMTALK_REGIST__ */
