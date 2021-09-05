//
//  NSUserDefaults+DB.m
//  TeamTalk
//
//  Created by Harry on 2021/9/5.
//  Copyright © 2021 DL. All rights reserved.
//

#import <YYKit/YYKit.h>

#import "NSUserDefaults+DB.h"

@implementation NSUserDefaults (DB)

+ (void)saveUser:(MTTUserEntity *)aUser {
   
   NSUserDefaults *stUserDefaults   = [NSUserDefaults standardUserDefaults];
   NSString       *szUser           = [aUser modelToJSONString];
   
   [stUserDefaults setObject:szUser forKey:MTTUserEntity.className];
   [stUserDefaults synchronize];
   
   return;
}

+ (MTTUserEntity *)getUser {
   
   MTTUserEntity  *stUser           = nil;
   NSString       *szUser           = nil;
   NSUserDefaults *stUserDefaults   = [NSUserDefaults standardUserDefaults];
   
   szUser   = [stUserDefaults objectForKey:MTTUserEntity.className];
   
   stUser   = [MTTUserEntity modelWithJSON:szUser];
   
   return stUser;
}

@end
