// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IMBaseDefine.pb.h"
// @@protoc_insertion_point(imports)

@class ContactSessionInfo;
@class ContactSessionInfoBuilder;
@class DepartInfo;
@class DepartInfoBuilder;
@class GroupInfo;
@class GroupInfoBuilder;
@class GroupVersionInfo;
@class GroupVersionInfoBuilder;
@class IMFileAddOfflineReq;
@class IMFileAddOfflineReqBuilder;
@class IMFileDelOfflineReq;
@class IMFileDelOfflineReqBuilder;
@class IMFileHasOfflineReq;
@class IMFileHasOfflineReqBuilder;
@class IMFileHasOfflineRsp;
@class IMFileHasOfflineRspBuilder;
@class IMFileLoginReq;
@class IMFileLoginReqBuilder;
@class IMFileLoginRsp;
@class IMFileLoginRspBuilder;
@class IMFileNotify;
@class IMFileNotifyBuilder;
@class IMFilePullDataReq;
@class IMFilePullDataReqBuilder;
@class IMFilePullDataRsp;
@class IMFilePullDataRspBuilder;
@class IMFileReq;
@class IMFileReqBuilder;
@class IMFileRsp;
@class IMFileRspBuilder;
@class IMFileState;
@class IMFileStateBuilder;
@class IpAddr;
@class IpAddrBuilder;
@class MsgInfo;
@class MsgInfoBuilder;
@class OfflineFileInfo;
@class OfflineFileInfoBuilder;
@class PushResult;
@class PushResultBuilder;
@class PushShieldStatus;
@class PushShieldStatusBuilder;
@class ServerUserStat;
@class ServerUserStatBuilder;
@class ShieldStatus;
@class ShieldStatusBuilder;
@class UnreadInfo;
@class UnreadInfoBuilder;
@class UserInfo;
@class UserInfoBuilder;
@class UserStat;
@class UserStatBuilder;
@class UserTokenInfo;
@class UserTokenInfoBuilder;



@interface ImfileRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define IMFileLoginReq_user_id @"userId"
#define IMFileLoginReq_task_id @"taskId"
#define IMFileLoginReq_file_role @"fileRole"
@interface IMFileLoginReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasUserId_:1;
  BOOL hasFileRole_:1;
  NSString* taskId;
  UInt32 userId;
  ClientFileRole fileRole;
}
- (BOOL) hasUserId;
- (BOOL) hasTaskId;
- (BOOL) hasFileRole;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSString* taskId;
@property (readonly) ClientFileRole fileRole;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileLoginReqBuilder*) builder;
+ (IMFileLoginReqBuilder*) builder;
+ (IMFileLoginReqBuilder*) builderWithPrototype:(IMFileLoginReq*) prototype;
- (IMFileLoginReqBuilder*) toBuilder;

+ (IMFileLoginReq*) parseFromData:(NSData*) data;
+ (IMFileLoginReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileLoginReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileLoginReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileLoginReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileLoginReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileLoginReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFileLoginReq* resultImfileLoginReq;
}

- (IMFileLoginReq*) defaultInstance;

- (IMFileLoginReqBuilder*) clear;
- (IMFileLoginReqBuilder*) clone;

- (IMFileLoginReq*) build;
- (IMFileLoginReq*) buildPartial;

- (IMFileLoginReqBuilder*) mergeFrom:(IMFileLoginReq*) other;
- (IMFileLoginReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileLoginReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFileLoginReqBuilder*) setUserId:(UInt32) value;
- (IMFileLoginReqBuilder*) clearUserId;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileLoginReqBuilder*) setTaskId:(NSString*) value;
- (IMFileLoginReqBuilder*) clearTaskId;

- (BOOL) hasFileRole;
- (ClientFileRole) fileRole;
- (IMFileLoginReqBuilder*) setFileRole:(ClientFileRole) value;
- (IMFileLoginReqBuilder*) clearFileRole;
@end

#define IMFileLoginRsp_result_code @"resultCode"
#define IMFileLoginRsp_task_id @"taskId"
@interface IMFileLoginRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasResultCode_:1;
  NSString* taskId;
  UInt32 resultCode;
}
- (BOOL) hasResultCode;
- (BOOL) hasTaskId;
@property (readonly) UInt32 resultCode;
@property (readonly, strong) NSString* taskId;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileLoginRspBuilder*) builder;
+ (IMFileLoginRspBuilder*) builder;
+ (IMFileLoginRspBuilder*) builderWithPrototype:(IMFileLoginRsp*) prototype;
- (IMFileLoginRspBuilder*) toBuilder;

+ (IMFileLoginRsp*) parseFromData:(NSData*) data;
+ (IMFileLoginRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileLoginRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileLoginRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileLoginRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileLoginRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileLoginRspBuilder : PBGeneratedMessageBuilder {
@private
  IMFileLoginRsp* resultImfileLoginRsp;
}

- (IMFileLoginRsp*) defaultInstance;

- (IMFileLoginRspBuilder*) clear;
- (IMFileLoginRspBuilder*) clone;

- (IMFileLoginRsp*) build;
- (IMFileLoginRsp*) buildPartial;

- (IMFileLoginRspBuilder*) mergeFrom:(IMFileLoginRsp*) other;
- (IMFileLoginRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileLoginRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMFileLoginRspBuilder*) setResultCode:(UInt32) value;
- (IMFileLoginRspBuilder*) clearResultCode;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileLoginRspBuilder*) setTaskId:(NSString*) value;
- (IMFileLoginRspBuilder*) clearTaskId;
@end

#define IMFileState_state @"state"
#define IMFileState_task_id @"taskId"
#define IMFileState_user_id @"userId"
@interface IMFileState : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasUserId_:1;
  BOOL hasState_:1;
  NSString* taskId;
  UInt32 userId;
  ClientFileState state;
}
- (BOOL) hasState;
- (BOOL) hasTaskId;
- (BOOL) hasUserId;
@property (readonly) ClientFileState state;
@property (readonly, strong) NSString* taskId;
@property (readonly) UInt32 userId;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileStateBuilder*) builder;
+ (IMFileStateBuilder*) builder;
+ (IMFileStateBuilder*) builderWithPrototype:(IMFileState*) prototype;
- (IMFileStateBuilder*) toBuilder;

+ (IMFileState*) parseFromData:(NSData*) data;
+ (IMFileState*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileState*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileState*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileState*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileState*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileStateBuilder : PBGeneratedMessageBuilder {
@private
  IMFileState* resultImfileState;
}

- (IMFileState*) defaultInstance;

- (IMFileStateBuilder*) clear;
- (IMFileStateBuilder*) clone;

- (IMFileState*) build;
- (IMFileState*) buildPartial;

- (IMFileStateBuilder*) mergeFrom:(IMFileState*) other;
- (IMFileStateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileStateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasState;
- (ClientFileState) state;
- (IMFileStateBuilder*) setState:(ClientFileState) value;
- (IMFileStateBuilder*) clearState;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileStateBuilder*) setTaskId:(NSString*) value;
- (IMFileStateBuilder*) clearTaskId;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFileStateBuilder*) setUserId:(UInt32) value;
- (IMFileStateBuilder*) clearUserId;
@end

#define IMFilePullDataReq_task_id @"taskId"
#define IMFilePullDataReq_user_id @"userId"
#define IMFilePullDataReq_trans_mode @"transMode"
#define IMFilePullDataReq_offset @"offset"
#define IMFilePullDataReq_data_size @"dataSize"
@interface IMFilePullDataReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasUserId_:1;
  BOOL hasOffset_:1;
  BOOL hasDataSize_:1;
  BOOL hasTransMode_:1;
  NSString* taskId;
  UInt32 userId;
  UInt32 offset;
  UInt32 dataSize;
  TransferFileType transMode;
}
- (BOOL) hasTaskId;
- (BOOL) hasUserId;
- (BOOL) hasTransMode;
- (BOOL) hasOffset;
- (BOOL) hasDataSize;
@property (readonly, strong) NSString* taskId;
@property (readonly) UInt32 userId;
@property (readonly) TransferFileType transMode;
@property (readonly) UInt32 offset;
@property (readonly) UInt32 dataSize;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFilePullDataReqBuilder*) builder;
+ (IMFilePullDataReqBuilder*) builder;
+ (IMFilePullDataReqBuilder*) builderWithPrototype:(IMFilePullDataReq*) prototype;
- (IMFilePullDataReqBuilder*) toBuilder;

+ (IMFilePullDataReq*) parseFromData:(NSData*) data;
+ (IMFilePullDataReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFilePullDataReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFilePullDataReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFilePullDataReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFilePullDataReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFilePullDataReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFilePullDataReq* resultImfilePullDataReq;
}

- (IMFilePullDataReq*) defaultInstance;

- (IMFilePullDataReqBuilder*) clear;
- (IMFilePullDataReqBuilder*) clone;

- (IMFilePullDataReq*) build;
- (IMFilePullDataReq*) buildPartial;

- (IMFilePullDataReqBuilder*) mergeFrom:(IMFilePullDataReq*) other;
- (IMFilePullDataReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFilePullDataReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFilePullDataReqBuilder*) setTaskId:(NSString*) value;
- (IMFilePullDataReqBuilder*) clearTaskId;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFilePullDataReqBuilder*) setUserId:(UInt32) value;
- (IMFilePullDataReqBuilder*) clearUserId;

- (BOOL) hasTransMode;
- (TransferFileType) transMode;
- (IMFilePullDataReqBuilder*) setTransMode:(TransferFileType) value;
- (IMFilePullDataReqBuilder*) clearTransMode;

- (BOOL) hasOffset;
- (UInt32) offset;
- (IMFilePullDataReqBuilder*) setOffset:(UInt32) value;
- (IMFilePullDataReqBuilder*) clearOffset;

- (BOOL) hasDataSize;
- (UInt32) dataSize;
- (IMFilePullDataReqBuilder*) setDataSize:(UInt32) value;
- (IMFilePullDataReqBuilder*) clearDataSize;
@end

#define IMFilePullDataRsp_result_code @"resultCode"
#define IMFilePullDataRsp_task_id @"taskId"
#define IMFilePullDataRsp_user_id @"userId"
#define IMFilePullDataRsp_offset @"offset"
#define IMFilePullDataRsp_file_data @"fileData"
@interface IMFilePullDataRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasFileData_:1;
  BOOL hasResultCode_:1;
  BOOL hasUserId_:1;
  BOOL hasOffset_:1;
  NSString* taskId;
  NSData* fileData;
  UInt32 resultCode;
  UInt32 userId;
  UInt32 offset;
}
- (BOOL) hasResultCode;
- (BOOL) hasTaskId;
- (BOOL) hasUserId;
- (BOOL) hasOffset;
- (BOOL) hasFileData;
@property (readonly) UInt32 resultCode;
@property (readonly, strong) NSString* taskId;
@property (readonly) UInt32 userId;
@property (readonly) UInt32 offset;
@property (readonly, strong) NSData* fileData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFilePullDataRspBuilder*) builder;
+ (IMFilePullDataRspBuilder*) builder;
+ (IMFilePullDataRspBuilder*) builderWithPrototype:(IMFilePullDataRsp*) prototype;
- (IMFilePullDataRspBuilder*) toBuilder;

+ (IMFilePullDataRsp*) parseFromData:(NSData*) data;
+ (IMFilePullDataRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFilePullDataRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMFilePullDataRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFilePullDataRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFilePullDataRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFilePullDataRspBuilder : PBGeneratedMessageBuilder {
@private
  IMFilePullDataRsp* resultImfilePullDataRsp;
}

- (IMFilePullDataRsp*) defaultInstance;

- (IMFilePullDataRspBuilder*) clear;
- (IMFilePullDataRspBuilder*) clone;

- (IMFilePullDataRsp*) build;
- (IMFilePullDataRsp*) buildPartial;

- (IMFilePullDataRspBuilder*) mergeFrom:(IMFilePullDataRsp*) other;
- (IMFilePullDataRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFilePullDataRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMFilePullDataRspBuilder*) setResultCode:(UInt32) value;
- (IMFilePullDataRspBuilder*) clearResultCode;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFilePullDataRspBuilder*) setTaskId:(NSString*) value;
- (IMFilePullDataRspBuilder*) clearTaskId;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFilePullDataRspBuilder*) setUserId:(UInt32) value;
- (IMFilePullDataRspBuilder*) clearUserId;

- (BOOL) hasOffset;
- (UInt32) offset;
- (IMFilePullDataRspBuilder*) setOffset:(UInt32) value;
- (IMFilePullDataRspBuilder*) clearOffset;

- (BOOL) hasFileData;
- (NSData*) fileData;
- (IMFilePullDataRspBuilder*) setFileData:(NSData*) value;
- (IMFilePullDataRspBuilder*) clearFileData;
@end

#define IMFileReq_from_user_id @"fromUserId"
#define IMFileReq_to_user_id @"toUserId"
#define IMFileReq_file_name @"fileName"
#define IMFileReq_file_size @"fileSize"
#define IMFileReq_trans_mode @"transMode"
@interface IMFileReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasFileName_:1;
  BOOL hasFromUserId_:1;
  BOOL hasToUserId_:1;
  BOOL hasFileSize_:1;
  BOOL hasTransMode_:1;
  NSString* fileName;
  UInt32 fromUserId;
  UInt32 toUserId;
  UInt32 fileSize;
  TransferFileType transMode;
}
- (BOOL) hasFromUserId;
- (BOOL) hasToUserId;
- (BOOL) hasFileName;
- (BOOL) hasFileSize;
- (BOOL) hasTransMode;
@property (readonly) UInt32 fromUserId;
@property (readonly) UInt32 toUserId;
@property (readonly, strong) NSString* fileName;
@property (readonly) UInt32 fileSize;
@property (readonly) TransferFileType transMode;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileReqBuilder*) builder;
+ (IMFileReqBuilder*) builder;
+ (IMFileReqBuilder*) builderWithPrototype:(IMFileReq*) prototype;
- (IMFileReqBuilder*) toBuilder;

+ (IMFileReq*) parseFromData:(NSData*) data;
+ (IMFileReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFileReq* resultImfileReq;
}

- (IMFileReq*) defaultInstance;

- (IMFileReqBuilder*) clear;
- (IMFileReqBuilder*) clone;

- (IMFileReq*) build;
- (IMFileReq*) buildPartial;

- (IMFileReqBuilder*) mergeFrom:(IMFileReq*) other;
- (IMFileReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFromUserId;
- (UInt32) fromUserId;
- (IMFileReqBuilder*) setFromUserId:(UInt32) value;
- (IMFileReqBuilder*) clearFromUserId;

- (BOOL) hasToUserId;
- (UInt32) toUserId;
- (IMFileReqBuilder*) setToUserId:(UInt32) value;
- (IMFileReqBuilder*) clearToUserId;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (IMFileReqBuilder*) setFileName:(NSString*) value;
- (IMFileReqBuilder*) clearFileName;

- (BOOL) hasFileSize;
- (UInt32) fileSize;
- (IMFileReqBuilder*) setFileSize:(UInt32) value;
- (IMFileReqBuilder*) clearFileSize;

- (BOOL) hasTransMode;
- (TransferFileType) transMode;
- (IMFileReqBuilder*) setTransMode:(TransferFileType) value;
- (IMFileReqBuilder*) clearTransMode;
@end

#define IMFileRsp_result_code @"resultCode"
#define IMFileRsp_from_user_id @"fromUserId"
#define IMFileRsp_to_user_id @"toUserId"
#define IMFileRsp_file_name @"fileName"
#define IMFileRsp_task_id @"taskId"
#define IMFileRsp_ip_addr_list @"ipAddrList"
#define IMFileRsp_trans_mode @"transMode"
@interface IMFileRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasFileName_:1;
  BOOL hasTaskId_:1;
  BOOL hasResultCode_:1;
  BOOL hasFromUserId_:1;
  BOOL hasToUserId_:1;
  BOOL hasTransMode_:1;
  NSString* fileName;
  NSString* taskId;
  UInt32 resultCode;
  UInt32 fromUserId;
  UInt32 toUserId;
  TransferFileType transMode;
  NSMutableArray * ipAddrListArray;
}
- (BOOL) hasResultCode;
- (BOOL) hasFromUserId;
- (BOOL) hasToUserId;
- (BOOL) hasFileName;
- (BOOL) hasTaskId;
- (BOOL) hasTransMode;
@property (readonly) UInt32 resultCode;
@property (readonly) UInt32 fromUserId;
@property (readonly) UInt32 toUserId;
@property (readonly, strong) NSString* fileName;
@property (readonly, strong) NSString* taskId;
@property (readonly, strong) NSArray<IpAddr*> * ipAddrList;
@property (readonly) TransferFileType transMode;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileRspBuilder*) builder;
+ (IMFileRspBuilder*) builder;
+ (IMFileRspBuilder*) builderWithPrototype:(IMFileRsp*) prototype;
- (IMFileRspBuilder*) toBuilder;

+ (IMFileRsp*) parseFromData:(NSData*) data;
+ (IMFileRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileRspBuilder : PBGeneratedMessageBuilder {
@private
  IMFileRsp* resultImfileRsp;
}

- (IMFileRsp*) defaultInstance;

- (IMFileRspBuilder*) clear;
- (IMFileRspBuilder*) clone;

- (IMFileRsp*) build;
- (IMFileRsp*) buildPartial;

- (IMFileRspBuilder*) mergeFrom:(IMFileRsp*) other;
- (IMFileRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasResultCode;
- (UInt32) resultCode;
- (IMFileRspBuilder*) setResultCode:(UInt32) value;
- (IMFileRspBuilder*) clearResultCode;

- (BOOL) hasFromUserId;
- (UInt32) fromUserId;
- (IMFileRspBuilder*) setFromUserId:(UInt32) value;
- (IMFileRspBuilder*) clearFromUserId;

- (BOOL) hasToUserId;
- (UInt32) toUserId;
- (IMFileRspBuilder*) setToUserId:(UInt32) value;
- (IMFileRspBuilder*) clearToUserId;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (IMFileRspBuilder*) setFileName:(NSString*) value;
- (IMFileRspBuilder*) clearFileName;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileRspBuilder*) setTaskId:(NSString*) value;
- (IMFileRspBuilder*) clearTaskId;

- (NSMutableArray<IpAddr*> *)ipAddrList;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;
- (IMFileRspBuilder *)addIpAddrList:(IpAddr*)value;
- (IMFileRspBuilder *)setIpAddrListArray:(NSArray<IpAddr*> *)array;
- (IMFileRspBuilder *)clearIpAddrList;

- (BOOL) hasTransMode;
- (TransferFileType) transMode;
- (IMFileRspBuilder*) setTransMode:(TransferFileType) value;
- (IMFileRspBuilder*) clearTransMode;
@end

#define IMFileNotify_from_user_id @"fromUserId"
#define IMFileNotify_to_user_id @"toUserId"
#define IMFileNotify_file_name @"fileName"
#define IMFileNotify_file_size @"fileSize"
#define IMFileNotify_task_id @"taskId"
#define IMFileNotify_ip_addr_list @"ipAddrList"
#define IMFileNotify_trans_mode @"transMode"
#define IMFileNotify_offline_ready @"offlineReady"
@interface IMFileNotify : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasFileName_:1;
  BOOL hasTaskId_:1;
  BOOL hasFromUserId_:1;
  BOOL hasToUserId_:1;
  BOOL hasFileSize_:1;
  BOOL hasOfflineReady_:1;
  BOOL hasTransMode_:1;
  NSString* fileName;
  NSString* taskId;
  UInt32 fromUserId;
  UInt32 toUserId;
  UInt32 fileSize;
  UInt32 offlineReady;
  TransferFileType transMode;
  NSMutableArray * ipAddrListArray;
}
- (BOOL) hasFromUserId;
- (BOOL) hasToUserId;
- (BOOL) hasFileName;
- (BOOL) hasFileSize;
- (BOOL) hasTaskId;
- (BOOL) hasTransMode;
- (BOOL) hasOfflineReady;
@property (readonly) UInt32 fromUserId;
@property (readonly) UInt32 toUserId;
@property (readonly, strong) NSString* fileName;
@property (readonly) UInt32 fileSize;
@property (readonly, strong) NSString* taskId;
@property (readonly, strong) NSArray<IpAddr*> * ipAddrList;
@property (readonly) TransferFileType transMode;
@property (readonly) UInt32 offlineReady;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileNotifyBuilder*) builder;
+ (IMFileNotifyBuilder*) builder;
+ (IMFileNotifyBuilder*) builderWithPrototype:(IMFileNotify*) prototype;
- (IMFileNotifyBuilder*) toBuilder;

+ (IMFileNotify*) parseFromData:(NSData*) data;
+ (IMFileNotify*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileNotify*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileNotify*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileNotify*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileNotify*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileNotifyBuilder : PBGeneratedMessageBuilder {
@private
  IMFileNotify* resultImfileNotify;
}

- (IMFileNotify*) defaultInstance;

- (IMFileNotifyBuilder*) clear;
- (IMFileNotifyBuilder*) clone;

- (IMFileNotify*) build;
- (IMFileNotify*) buildPartial;

- (IMFileNotifyBuilder*) mergeFrom:(IMFileNotify*) other;
- (IMFileNotifyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileNotifyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFromUserId;
- (UInt32) fromUserId;
- (IMFileNotifyBuilder*) setFromUserId:(UInt32) value;
- (IMFileNotifyBuilder*) clearFromUserId;

- (BOOL) hasToUserId;
- (UInt32) toUserId;
- (IMFileNotifyBuilder*) setToUserId:(UInt32) value;
- (IMFileNotifyBuilder*) clearToUserId;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (IMFileNotifyBuilder*) setFileName:(NSString*) value;
- (IMFileNotifyBuilder*) clearFileName;

- (BOOL) hasFileSize;
- (UInt32) fileSize;
- (IMFileNotifyBuilder*) setFileSize:(UInt32) value;
- (IMFileNotifyBuilder*) clearFileSize;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileNotifyBuilder*) setTaskId:(NSString*) value;
- (IMFileNotifyBuilder*) clearTaskId;

- (NSMutableArray<IpAddr*> *)ipAddrList;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;
- (IMFileNotifyBuilder *)addIpAddrList:(IpAddr*)value;
- (IMFileNotifyBuilder *)setIpAddrListArray:(NSArray<IpAddr*> *)array;
- (IMFileNotifyBuilder *)clearIpAddrList;

- (BOOL) hasTransMode;
- (TransferFileType) transMode;
- (IMFileNotifyBuilder*) setTransMode:(TransferFileType) value;
- (IMFileNotifyBuilder*) clearTransMode;

- (BOOL) hasOfflineReady;
- (UInt32) offlineReady;
- (IMFileNotifyBuilder*) setOfflineReady:(UInt32) value;
- (IMFileNotifyBuilder*) clearOfflineReady;
@end

#define IMFileHasOfflineReq_user_id @"userId"
#define IMFileHasOfflineReq_attach_data @"attachData"
@interface IMFileHasOfflineReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSData* attachData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileHasOfflineReqBuilder*) builder;
+ (IMFileHasOfflineReqBuilder*) builder;
+ (IMFileHasOfflineReqBuilder*) builderWithPrototype:(IMFileHasOfflineReq*) prototype;
- (IMFileHasOfflineReqBuilder*) toBuilder;

+ (IMFileHasOfflineReq*) parseFromData:(NSData*) data;
+ (IMFileHasOfflineReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileHasOfflineReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileHasOfflineReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileHasOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileHasOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileHasOfflineReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFileHasOfflineReq* resultImfileHasOfflineReq;
}

- (IMFileHasOfflineReq*) defaultInstance;

- (IMFileHasOfflineReqBuilder*) clear;
- (IMFileHasOfflineReqBuilder*) clone;

- (IMFileHasOfflineReq*) build;
- (IMFileHasOfflineReq*) buildPartial;

- (IMFileHasOfflineReqBuilder*) mergeFrom:(IMFileHasOfflineReq*) other;
- (IMFileHasOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileHasOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFileHasOfflineReqBuilder*) setUserId:(UInt32) value;
- (IMFileHasOfflineReqBuilder*) clearUserId;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMFileHasOfflineReqBuilder*) setAttachData:(NSData*) value;
- (IMFileHasOfflineReqBuilder*) clearAttachData;
@end

#define IMFileHasOfflineRsp_user_id @"userId"
#define IMFileHasOfflineRsp_offline_file_list @"offlineFileList"
#define IMFileHasOfflineRsp_ip_addr_list @"ipAddrList"
#define IMFileHasOfflineRsp_attach_data @"attachData"
@interface IMFileHasOfflineRsp : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAttachData_:1;
  BOOL hasUserId_:1;
  NSData* attachData;
  UInt32 userId;
  NSMutableArray * offlineFileListArray;
  NSMutableArray * ipAddrListArray;
}
- (BOOL) hasUserId;
- (BOOL) hasAttachData;
@property (readonly) UInt32 userId;
@property (readonly, strong) NSArray<OfflineFileInfo*> * offlineFileList;
@property (readonly, strong) NSArray<IpAddr*> * ipAddrList;
@property (readonly, strong) NSData* attachData;
- (OfflineFileInfo*)offlineFileListAtIndex:(NSUInteger)index;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileHasOfflineRspBuilder*) builder;
+ (IMFileHasOfflineRspBuilder*) builder;
+ (IMFileHasOfflineRspBuilder*) builderWithPrototype:(IMFileHasOfflineRsp*) prototype;
- (IMFileHasOfflineRspBuilder*) toBuilder;

+ (IMFileHasOfflineRsp*) parseFromData:(NSData*) data;
+ (IMFileHasOfflineRsp*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileHasOfflineRsp*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileHasOfflineRsp*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileHasOfflineRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileHasOfflineRsp*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileHasOfflineRspBuilder : PBGeneratedMessageBuilder {
@private
  IMFileHasOfflineRsp* resultImfileHasOfflineRsp;
}

- (IMFileHasOfflineRsp*) defaultInstance;

- (IMFileHasOfflineRspBuilder*) clear;
- (IMFileHasOfflineRspBuilder*) clone;

- (IMFileHasOfflineRsp*) build;
- (IMFileHasOfflineRsp*) buildPartial;

- (IMFileHasOfflineRspBuilder*) mergeFrom:(IMFileHasOfflineRsp*) other;
- (IMFileHasOfflineRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileHasOfflineRspBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserId;
- (UInt32) userId;
- (IMFileHasOfflineRspBuilder*) setUserId:(UInt32) value;
- (IMFileHasOfflineRspBuilder*) clearUserId;

- (NSMutableArray<OfflineFileInfo*> *)offlineFileList;
- (OfflineFileInfo*)offlineFileListAtIndex:(NSUInteger)index;
- (IMFileHasOfflineRspBuilder *)addOfflineFileList:(OfflineFileInfo*)value;
- (IMFileHasOfflineRspBuilder *)setOfflineFileListArray:(NSArray<OfflineFileInfo*> *)array;
- (IMFileHasOfflineRspBuilder *)clearOfflineFileList;

- (NSMutableArray<IpAddr*> *)ipAddrList;
- (IpAddr*)ipAddrListAtIndex:(NSUInteger)index;
- (IMFileHasOfflineRspBuilder *)addIpAddrList:(IpAddr*)value;
- (IMFileHasOfflineRspBuilder *)setIpAddrListArray:(NSArray<IpAddr*> *)array;
- (IMFileHasOfflineRspBuilder *)clearIpAddrList;

- (BOOL) hasAttachData;
- (NSData*) attachData;
- (IMFileHasOfflineRspBuilder*) setAttachData:(NSData*) value;
- (IMFileHasOfflineRspBuilder*) clearAttachData;
@end

#define IMFileAddOfflineReq_from_user_id @"fromUserId"
#define IMFileAddOfflineReq_to_user_id @"toUserId"
#define IMFileAddOfflineReq_task_id @"taskId"
#define IMFileAddOfflineReq_file_name @"fileName"
#define IMFileAddOfflineReq_file_size @"fileSize"
@interface IMFileAddOfflineReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasFileName_:1;
  BOOL hasFromUserId_:1;
  BOOL hasToUserId_:1;
  BOOL hasFileSize_:1;
  NSString* taskId;
  NSString* fileName;
  UInt32 fromUserId;
  UInt32 toUserId;
  UInt32 fileSize;
}
- (BOOL) hasFromUserId;
- (BOOL) hasToUserId;
- (BOOL) hasTaskId;
- (BOOL) hasFileName;
- (BOOL) hasFileSize;
@property (readonly) UInt32 fromUserId;
@property (readonly) UInt32 toUserId;
@property (readonly, strong) NSString* taskId;
@property (readonly, strong) NSString* fileName;
@property (readonly) UInt32 fileSize;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileAddOfflineReqBuilder*) builder;
+ (IMFileAddOfflineReqBuilder*) builder;
+ (IMFileAddOfflineReqBuilder*) builderWithPrototype:(IMFileAddOfflineReq*) prototype;
- (IMFileAddOfflineReqBuilder*) toBuilder;

+ (IMFileAddOfflineReq*) parseFromData:(NSData*) data;
+ (IMFileAddOfflineReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileAddOfflineReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileAddOfflineReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileAddOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileAddOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileAddOfflineReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFileAddOfflineReq* resultImfileAddOfflineReq;
}

- (IMFileAddOfflineReq*) defaultInstance;

- (IMFileAddOfflineReqBuilder*) clear;
- (IMFileAddOfflineReqBuilder*) clone;

- (IMFileAddOfflineReq*) build;
- (IMFileAddOfflineReq*) buildPartial;

- (IMFileAddOfflineReqBuilder*) mergeFrom:(IMFileAddOfflineReq*) other;
- (IMFileAddOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileAddOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFromUserId;
- (UInt32) fromUserId;
- (IMFileAddOfflineReqBuilder*) setFromUserId:(UInt32) value;
- (IMFileAddOfflineReqBuilder*) clearFromUserId;

- (BOOL) hasToUserId;
- (UInt32) toUserId;
- (IMFileAddOfflineReqBuilder*) setToUserId:(UInt32) value;
- (IMFileAddOfflineReqBuilder*) clearToUserId;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileAddOfflineReqBuilder*) setTaskId:(NSString*) value;
- (IMFileAddOfflineReqBuilder*) clearTaskId;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (IMFileAddOfflineReqBuilder*) setFileName:(NSString*) value;
- (IMFileAddOfflineReqBuilder*) clearFileName;

- (BOOL) hasFileSize;
- (UInt32) fileSize;
- (IMFileAddOfflineReqBuilder*) setFileSize:(UInt32) value;
- (IMFileAddOfflineReqBuilder*) clearFileSize;
@end

#define IMFileDelOfflineReq_from_user_id @"fromUserId"
#define IMFileDelOfflineReq_to_user_id @"toUserId"
#define IMFileDelOfflineReq_task_id @"taskId"
@interface IMFileDelOfflineReq : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTaskId_:1;
  BOOL hasFromUserId_:1;
  BOOL hasToUserId_:1;
  NSString* taskId;
  UInt32 fromUserId;
  UInt32 toUserId;
}
- (BOOL) hasFromUserId;
- (BOOL) hasToUserId;
- (BOOL) hasTaskId;
@property (readonly) UInt32 fromUserId;
@property (readonly) UInt32 toUserId;
@property (readonly, strong) NSString* taskId;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IMFileDelOfflineReqBuilder*) builder;
+ (IMFileDelOfflineReqBuilder*) builder;
+ (IMFileDelOfflineReqBuilder*) builderWithPrototype:(IMFileDelOfflineReq*) prototype;
- (IMFileDelOfflineReqBuilder*) toBuilder;

+ (IMFileDelOfflineReq*) parseFromData:(NSData*) data;
+ (IMFileDelOfflineReq*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileDelOfflineReq*) parseFromInputStream:(NSInputStream*) input;
+ (IMFileDelOfflineReq*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IMFileDelOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IMFileDelOfflineReq*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IMFileDelOfflineReqBuilder : PBGeneratedMessageBuilder {
@private
  IMFileDelOfflineReq* resultImfileDelOfflineReq;
}

- (IMFileDelOfflineReq*) defaultInstance;

- (IMFileDelOfflineReqBuilder*) clear;
- (IMFileDelOfflineReqBuilder*) clone;

- (IMFileDelOfflineReq*) build;
- (IMFileDelOfflineReq*) buildPartial;

- (IMFileDelOfflineReqBuilder*) mergeFrom:(IMFileDelOfflineReq*) other;
- (IMFileDelOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IMFileDelOfflineReqBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFromUserId;
- (UInt32) fromUserId;
- (IMFileDelOfflineReqBuilder*) setFromUserId:(UInt32) value;
- (IMFileDelOfflineReqBuilder*) clearFromUserId;

- (BOOL) hasToUserId;
- (UInt32) toUserId;
- (IMFileDelOfflineReqBuilder*) setToUserId:(UInt32) value;
- (IMFileDelOfflineReqBuilder*) clearToUserId;

- (BOOL) hasTaskId;
- (NSString*) taskId;
- (IMFileDelOfflineReqBuilder*) setTaskId:(NSString*) value;
- (IMFileDelOfflineReqBuilder*) clearTaskId;
@end


// @@protoc_insertion_point(global_scope)
