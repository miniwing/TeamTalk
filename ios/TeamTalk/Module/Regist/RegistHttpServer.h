//
//  RegistHttpServer.h
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __TEAMTALK_REGIST__

@interface RegistHttpServer : NSObject

/**
 *  注册 Http 服务器
 *
 *  @param userName 用户名
 *  @param password 密码
 *  @param success  登录成功回调的block
 *  @param failure  登录失败回调的block
 */
- (void)registWithUserName:(NSString*)userName
                 password:(NSString*)password
                  success:(void(^)(id respone))success
                  failure:(void(^)(id error))failure;

- (void)getMsgIp:(void(^)(NSDictionary *dic))block failure:(void(^)(NSString* error))failure;

@end

#endif /* __TEAMTALK_REGIST__ */
