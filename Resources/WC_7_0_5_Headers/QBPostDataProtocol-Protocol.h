//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSObject<QBPostDataProtocol>, NSString;

@protocol QBPostDataProtocol <NSStreamDelegate>
- (NSInputStream *)createInputStreamForPost;
@property(nonatomic) int dataPostType;
@property _Bool dataReady;
- (unsigned long long)dataSize;
- (NSData *)finalPostData;
@property long long randomString;
- (_Bool)shouldUseStreamToSendData;

@optional
- (NSString *)contentBoundaryString;
- (NSData *)contentData;
- (NSString *)contentInfoString;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
- (void)fillDataFromAnotherInstance:(NSObject<QBPostDataProtocol> *)arg1;
@end

