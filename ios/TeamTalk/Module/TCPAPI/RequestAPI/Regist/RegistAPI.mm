//
//  RegistAPI.m
//  Duoduo
//
//  Created by 独嘉 on 14-5-6.
//  Copyright (c) 2015年 MoguIM All rights reserved.
//

#import "RegistAPI.h"
#import "MTTUserEntity.h"
#import "MTTUserEntity.h"
#import "security.h"
#import "NSString+Additions.h"

#import "IMBaseDefine.pb.h"
#import "IMLogin.pb.h"
#import "IMRegist.pb.h"

@implementation RegistAPI
/**
 *  请求超时时间
 *
 *  @return 超时时间
 */
- (int)requestTimeOutTimeInterval {
   
   return 5;
}

/**
 *  请求的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)requestServiceID {
   
   return ServiceIDSidLogin;
}

/**
 *  请求返回的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)responseServiceID {
   
   return ServiceIDSidLogin;
}

/**
 *  请求的commendID
 *
 *  @return 对应的commendID
 */
- (int)requestCommendID {
   
   return LoginCmdIDCidLoginReqRegist;
}

/**
 *  请求返回的commendID
 *
 *  @return 对应的commendID
 */
- (int)responseCommendID {
   
   return LoginCmdIDCidLoginResRegist;
}

/**
 *  解析数据的block
 *
 *  @return 解析数据的block
 */
- (Analysis)analysisReturnData {
   
   Analysis analysis = (id)^(NSData* data) {
      
      IMRegistRes    *stRegistRes   = [IMRegistRes parseFromData:data];
      NSInteger       nServerTime   = stRegistRes.serverTime;
      NSInteger       nLoginResult  = stRegistRes.resultCode;
      NSString       *szResultString= stRegistRes.resultString;
      NSDictionary   *stResult      = [NSDictionary dictionary];
      
      LogDebug((@"-[RegistAPI analysisReturnData] : LoginResult : %ld", nLoginResult));

      stResult = @{
         @"result":@(nLoginResult),
         @"resultString":szResultString,
      };

      return stResult;
   };
   
   return analysis;
}

/**
 *  打包数据的block
 *
 *  @return 打包数据的block
 */
- (Package)packageRequestObject {
   
   Package package = (id)^(id object,uint32_t seqNo) {
      
      NSString *clientVersion = [NSString stringWithFormat:@"MAC/%@-%@",[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"],[[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]];
      NSString * strMsg = object[1];
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self requestServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      
      IMRegistReqBuilder   *stRegist   = [IMRegistReq builder];
      [stRegist setUserName:object[0]];
      [stRegist setPassword:[strMsg MD5]];
      [stRegist setClientType:ClientTypeClientTypeIos];
      [stRegist setClientVersion:clientVersion];
//      [stRegist setOnlineStatus:UserStatTypeUserStatusOnline];
      
      [dataout directWriteBytes:[stRegist build].data];
      [dataout writeDataCount];
      
      return [dataout toByteArray];
   };
   
   return package;
}
@end
