//
//  RegistHttpServer.m
//  TeamTalk
//
//  Created by Harry on 2020/6/24.
//  Copyright © 2020 Harry. All rights reserved.
//

#import "RegistHttpServer.h"
#import "MTTAFNetworkingClient.h"

#if __TEAMTALK_REGIST__

@implementation RegistHttpServer

- (void)getMsgIp:(void(^)(NSDictionary *dic))block failure:(void(^)(NSString* error))failure {
   
   AFHTTPRequestOperationManager *manager = [AFHTTPRequestOperationManager manager];
   
   manager.responseSerializer = [AFHTTPResponseSerializer serializer];
   [manager GET:SERVER_ADDR() parameters:nil success:^(AFHTTPRequestOperation *operation, id responseObject) {
      
      //       {
      //           backupIP = "10.211.55.13";
      //           code = 0;
      //           discovery = "http://10.211.55.13/api/discovery";
      //           msfsBackup = "http://10.211.55.13:8700/";
      //           msfsPrior = "http://10.211.55.13:8700/";
      //           msg = "";
      //           port = 8000;
      //           priorIP = "10.211.55.13";
      //       }
      
      NSDictionary *responseDictionary = [NSJSONSerialization JSONObjectWithData:responseObject options:0 error:nil];
      block(responseDictionary);
      
      
   }
        failure:^(AFHTTPRequestOperation *operation, NSError *error) {
      NSString *errordes = error.domain;
      failure(errordes);
   } ];
   
    return;
}

@end

#endif /* __TEAMTALK_REGIST__ */
