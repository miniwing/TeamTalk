//
//  NSUserDefaults+DB.h
//  TeamTalk
//
//  Created by Harry on 2021/9/5.
//  Copyright © 2021 DL. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MTTUserEntity.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaults (DB)

+ (void)saveUser:(MTTUserEntity *)aUser;
+ (MTTUserEntity *)getUser;

@end

NS_ASSUME_NONNULL_END
