//
//  ModifyPassAPI.m
//  TeamTalk
//
//  Created by Donal Tong on 16/4/9.
//  Copyright © 2016年 DL. All rights reserved.
//

#import "ModifyPassAPI.h"
#import "RuntimeStatus.h"
#import "IMLogin.pb.h"
#import "MTTUserEntity.h"
#import "NSString+Additions.h"
@implementation ModifyPassAPI
- (int)requestTimeOutTimeInterval
{
   return 0;
}

- (int)requestServiceID
{
   return ServiceIDSidLogin;
}

- (int)responseServiceID
{
   return ServiceIDSidLogin;
}

- (int)requestCommendID
{
   return LoginCmdIDCidLoginReqModifyPass;
}

- (int)responseCommendID
{
   return LoginCmdIDCidLoginResModifyPass;
}

- (Analysis)analysisReturnData
{
   Analysis analysis = (id)^(NSData* data)
   {
      IMModifyPassRes *rsp = [IMModifyPassRes parseFromData:data];
      NSDictionary* result = nil;
      NSInteger loginResult = rsp.status;
      result = @{
         @"code":[NSString stringWithFormat:@"%ld", loginResult],
      };
      return result;
      
   };
   return analysis;
}

- (Package)packageRequestObject
{
   Package package = (id)^(id object,uint32_t seqNo)
   {
      NSString *oldPass = (NSString *)object[0];
      NSString *newPASS = (NSString *)object[1];
      IMModifyPassReqBuilder *deviceToken = [IMModifyPassReq builder];
      [deviceToken setUserId:[MTTUserEntity localIDTopb:TheRuntime.user.objID]];
      [deviceToken setOldPass:[oldPass MD5]];
      [deviceToken setNewPass:[newPASS MD5]];
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self requestServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      [dataout writeDataCount];
      [dataout directWriteBytes:[deviceToken build].data];
      [dataout writeDataCount];
      return [dataout toByteArray];
      
   };
   return package;
}
@end
