//
//  GetGroupInfoAPi.m
//  TeamTalk
//
//  Created by Michael Scofield on 2014-09-18.
//  Copyright (c) 2014 dujia. All rights reserved.
//

#import "GetGroupInfoAPI.h"
#import "MTTGroupEntity.h"

#import "IMBaseDefine.pb.h"
#import "IMGroup.pb.h"

@implementation GetGroupInfoAPI

- (int)requestTimeOutTimeInterval
{
   return 0;
}

- (int)requestServiceID
{
   return ServiceIDSidGroup;
}

- (int)responseServiceID
{
   return ServiceIDSidGroup;
}

- (int)requestCommendID
{
   return GroupCmdIDCidGroupInfoRequest;
}

- (int)responseCommendID
{
   return GroupCmdIDCidGroupInfoResponse;
}

- (Analysis)analysisReturnData
{
   Analysis analysis = (id)^(NSData* data)
   {
      IMGroupInfoListRsp *rsp = [IMGroupInfoListRsp parseFromData:data];
      // NSUInteger userid = rsp.userId;
      NSMutableArray *array = [NSMutableArray new];
      for (GroupInfo *info in [rsp groupInfoList]) {
         MTTGroupEntity *group = [MTTGroupEntity initMTTGroupEntityFromPBData:info];
         [array addObject:group];
      }
      
      return array;
      
   };
   return analysis;
}

- (Package)packageRequestObject
{
   Package package = (id)^(id object,uint32_t seqNo)
   {
      DDDataOutputStream *dataout = [[DDDataOutputStream alloc] init];
      IMGroupInfoListReqBuilder *info = [IMGroupInfoListReq builder];
      GroupVersionInfoBuilder *groupInfo = [GroupVersionInfo builder];
      
      
      [groupInfo setGroupId:[object[0] integerValue]];
      [groupInfo setVersion:[object[1] integerValue]];
      [info setUserId:0];
      [info addGroupVersionList:[groupInfo build]];
      [dataout writeInt:0];
      [dataout writeTcpProtocolHeader:[self requestServiceID]
                                  cId:[self requestCommendID]
                                seqNo:seqNo];
      [dataout directWriteBytes:[info build].data];
      [dataout writeDataCount];
      return [dataout toByteArray];
      
   };
   return package;
}
@end
