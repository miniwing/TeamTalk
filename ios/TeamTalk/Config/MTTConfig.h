//
//  CONSTANT.h
//  IOSDuoduo
//
//  Created by 独嘉 on 14-5-23.
//  Copyright (c) 2014年 dujia. All rights reserved.
//

/**
 *  Debug模式和Release模式不同的宏定义
 */

//-------------------打印--------------------
#ifdef DEBUG
#define NEED_OUTPUT_LOG                         0
#define Is_CanSwitchServer                      1
#else
#define NEED_OUTPUT_LOG                         0
#define Is_CanSwitchServer                      0
#endif

#if NEED_OUTPUT_LOG
#define DDLog(xx, ...)                          NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DDLog(xx, ...)                          nil
#endif

#define IM_PDU_HEADER_LEN                       16
#define IM_PDU_VERSION                          13

//#define SERVER_ADDR                             @"http://115.159.211.199:8080/msg_server"
//#define SERVER_ADDR                             @"http://10.211.55.13:8080/msg_server"
//#define SERVER_ADDR                             @"http://192.168.3.10:8080/msg_server"

#define _(x)                                    NSLocalizedString(x,@"")

#ifdef DEBUG
//#  define APIURL                                @"http://115.159.211.199"
//#  define APIURL                                @"http://10.211.55.13"
//#  define API_URL                               @"http://192.168.3.10"
#else
//#  define APIURL                                @"http://115.159.211.199"
//#  define APIURL                                @"http://10.211.55.13"
//#  define API_URL                               @"http://192.168.3.10"
#endif

#define __SERVER_ADDR                           @"http://%@:8080/msg_server"
#define __API_URL                               @"http://%@"

static inline NSString * API_URL(void) {
   
   return [NSString stringWithFormat:__API_URL, __TEAMTALK_HOST__];
}

static inline NSString * SERVER_ADDR(void) {
   
   return [NSString stringWithFormat:__SERVER_ADDR, __TEAMTALK_HOST__];
}

#define kGtAppId                                @"JF5g0qW7Xd9VpX9Zd3SXi9"
#define kGtAppKey                               @"bStLfBKQ1Y6IK54ebUvMMA"
#define kGtAppSecret                            @"8ur1p4ZX8H6b1GzNhLQ4Y9"
