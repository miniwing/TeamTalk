//
//  RegistTcpServer.h
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#if __TEAMTALK_REGIST__

#import <Foundation/Foundation.h>

typedef void(^ClientSuccess)();
typedef void(^ClientFailure)(NSError* error);

@interface RegistTcpServer : NSObject

- (void)registTcpServerIP:(NSString*)aIP port:(NSInteger)aPort success:(void(^)())aSuccess failure:(void(^)())aFailure;

@end

#endif /* __TEAMTALK_REGIST__ */
