//
//  GetMsgByMsgIDsAPI.m
//  TeamTalk
//
//  Created by Michael Scofield on 2015-02-05.
//  Copyright (c) 2015 Michael Hu. All rights reserved.
//

#import "GetMsgByMsgIDsAPI.h"

#import "IMBaseDefine.pb.h"
#import "IMMessage.pb.h"

@implementation GetMsgByMsgIDsAPI

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
   return ServiceIDSidMsg;
}

/**
 *  请求返回的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)responseServiceID
{
   return ServiceIDSidMsg;
}

/**
 *  请求的commendID
 *
 *  @return 对应的commendID
 */
- (int)requestCommendID
{
   return MessageCmdIDCidMsgGetByMsgIdReq;
}

/**
 *  请求返回的commendID
 *
 *  @return 对应的commendID
 */
- (int)responseCommendID
{
   return MessageCmdIDCidMsgGetByMsgIdRes;
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
      IMGetMsgByIdRsp *lstMsgs = [IMGetMsgByIdRsp parseFromData:data];
      return [lstMsgs msgList];
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
      SessionType type = (SessionType)[object[0] integerValue];
      NSInteger sessionID = [MTTUtil changeIDToOriginal:object[1]];
      NSArray *ids = object[2];
      IMGetMsgByIdReqBuilder *req = [IMGetMsgByIdReq builder];
      [req setUserId:0];
      [req setSessionType:type];
      [req setSessionId:sessionID];
      [req addMsgIdList:ids];
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self responseServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      [dataout directWriteBytes:[req build].data];
      [dataout writeDataCount];
      return [dataout toByteArray];
   };
   return package;
}
@end
