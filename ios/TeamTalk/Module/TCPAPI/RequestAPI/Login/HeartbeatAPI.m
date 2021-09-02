//
//  DDHeartbeatAPI.m
//  IOSDuoduo
//
//  Created by 独嘉 on 14-5-26.
//  Copyright (c) 2014年 dujia. All rights reserved.
//

#import "HeartbeatAPI.h"

#import "IMBaseDefine.pb.h"
#import "IMOther.pb.h"

@implementation HeartbeatAPI
/**
 *  请求超时时间
 *
 *  @return 超时时间
 */
- (int)requestTimeOutTimeInterval
{
   return 0;
}

/**
 *  请求的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)requestServiceID
{
   return ServiceIDSidOther;
}

/**
 *  请求返回的serviceID
 *
 *  @return 对应的serviceID
 */
- (int)responseServiceID
{
   return ServiceIDSidOther;
}

/**
 *  请求的commendID
 *
 *  @return 对应的commendID
 */
- (int)requestCommendID
{
   return OtherCmdIDCidOtherHeartbeat;
}

/**
 *  请求返回的commendID
 *
 *  @return 对应的commendID
 */
- (int)responseCommendID
{
   return OtherCmdIDCidOtherHeartbeat;
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
   Package package = (id)^(id object,UInt32 seqNo)
   {
      IMHeartBeatBuilder *builder = [IMHeartBeat builder];
      
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self responseServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      [dataout directWriteBytes:[builder build].data];
      [dataout writeDataCount];
      return [dataout toByteArray];
   };
   return package;
}
@end
