//
//  ShieldGroupMessageAPI.m
//  TeamTalk
//
//  Created by Michael Scofield on 2014-10-20.
//  Copyright (c) 2014 dujia. All rights reserved.
//

#import "ShieldGroupMessageAPI.h"

#import "IMBaseDefine.pb.h"
#import "IMGroup.pb.h"

@implementation ShieldGroupMessageAPI
/**
 *  请求超时时间
 *
 *  @return 超时时间
 */
- (int)requestTimeOutTimeInterval
{
   return TimeOutTimeInterval;
}

/**
 *  请求的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)requestServiceID
{
   return ServiceIDSidGroup;
}

/**
 *  请求返回的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)responseServiceID
{
   return ServiceIDSidGroup;
}

/**
 *  请求的commendID
 *
 *  @return 对应的commendID
 */
- (int)requestCommendID
{
//   return IM_GROU_SHIELD_REQ;
   return GroupCmdIDCidGroupShieldGroupRequest;
}

/**
 *  请求返回的commendID
 *
 *  @return 对应的commendID
 */
- (int)responseCommendID
{
//   return IM_GROU_SHIELD_RES;
   return GroupCmdIDCidGroupShieldGroupResponse;
}

/**
 *  解析数据的block
 *
 *  @return 解析数据的block
 */
- (Analysis)analysisReturnData
{
   Analysis analysis = (id)^(NSData* data)
   {
      IMGroupShieldRsp *groupShieldRsp = [IMGroupShieldRsp parseFromData:data];
      return groupShieldRsp.resultCode;
   };
   return analysis;
}

/**
 *  打包数据的block
 *
 *  @return 打包数据的block
 */
- (Package)packageRequestObject
{
   Package package = (id)^(id object,uint16_t seqNo)
   {
      NSArray* array = (NSArray*)object;
      UInt32 groupID =[MTTUtil changeIDToOriginal:array[0]];
      uint32_t isShield = [array[1] intValue];
      IMGroupShieldReqBuilder *groupShield = [IMGroupShieldReq builder];
      [groupShield setUserId:0];
      [groupShield setGroupId:groupID];
      [groupShield setShieldStatus:isShield];
      
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self requestServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      [dataout directWriteBytes:[groupShield build].data];
      [dataout writeDataCount];
      return [dataout toByteArray];
   };
   return package;
}
@end
