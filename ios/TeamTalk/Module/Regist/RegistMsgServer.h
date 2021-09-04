//
//  RegistMsgServer.h
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __TEAMTALK_REGIST__

@interface RegistMsgServer : NSObject

/**
 *  连接消息服务器
 *
 *  @param userID  用户ID
 *  @param token   token
 *  @param success 连接成功执行的block
 *  @param failure 连接失败执行的block
 */
- (void)registUserName:(NSString*)userID
              password:(NSString *)password
               success:(void(^)(id object))success
               failure:(void(^)(id object))failure;

@end

#endif /* __TEAMTALK_REGIST__ */
