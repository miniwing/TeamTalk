//
//  NSStream+NSStreamAddition.m
//  mtalk
//
//  Created by maye on 13-10-23.
//  Copyright (c) 2015年 MoguIM. All rights reserved.
//


#import "NSStream+NSStreamAddition.h"
//TODO we need to check this code later..by zouye
@implementation NSStream (NSStreamAddition)

+ (void)getStreamsToHostNamed:(NSString *)aHostName
                         port:(NSInteger)aPort
                  inputStream:(NSInputStream **)aInputStream
                 outputStream:(NSOutputStream **)aOutputStream {
   
   CFHostRef           host;
   CFReadStreamRef     readStream;
   CFWriteStreamRef    writeStream;
   
   readStream = NULL;
   writeStream = NULL;
   
   host = CFHostCreateWithName(NULL, (__bridge CFStringRef) aHostName);
   
   if (host != NULL) {
      (void) CFStreamCreatePairWithSocketToCFHost(NULL, host, (SInt32)aPort, &readStream, &writeStream);
      CFRelease(host);
   }
   
   if (aInputStream == NULL) {
      if (readStream != NULL) {
         CFRelease(readStream);
      }
   }
   else {
      *aInputStream = (__bridge NSInputStream *) readStream;
   }
   
   if (aOutputStream == NULL) {
      if (writeStream != NULL) {
         CFRelease(writeStream);
      }
   }
   else {
      *aOutputStream =(__bridge NSOutputStream *) writeStream;
   }
}

@end

@implementation NSMutableData(NSMutableDataExtension)

- (void)writeBool:(BOOL)value {
   
   return;
}

- (void)writeByte:(uint8_t)value {
   
   return;
}

- (void)writeShort:(short)v {
   int8_t ch[2];
   ch[0] = (v & 0x0ff00)>>8;
   ch[1] = (v & 0x0ff);
   [self appendBytes:ch length:2];
}

- (void)writeInt:(int)aint {
   char tag='I';
   [self appendBytes:&tag length:1];
   //NSString * stringcontent=[NSString stringWithFormat:@"%c", 'I'];
   unsigned char b32 = aint >> 24;
   unsigned char b24 = (aint >> 16) & 0x000000FF;
   unsigned char b16 = (aint >> 8) & 0x000000FF;
   unsigned char b8 = aint & 0x000000FF;
   [self appendBytes:&b32 length:1];
   [self appendBytes:&b24 length:1];
   [self appendBytes:&b16 length:1];
   [self appendBytes:&b8 length:1];
   
   return;
}

-(void)writeLong:(long long)value {
   
   return;
}

-(void)writeFloat:(float)value {
   
   return;
}

-(void)writeDouble:(double)value {
   
   return;
}

-(void)writeUTF:(NSString *)value {
   
   return;
}

@end
