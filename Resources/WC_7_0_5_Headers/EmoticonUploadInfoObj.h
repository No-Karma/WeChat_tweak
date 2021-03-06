//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonUploadInfoObj : MMObject <PBCoding>
{
    _Bool isUploadWxam;
    _Bool addToTop;
    _Bool isSelfie;
    _Bool needAsyncUpload;
    NSString *uploadImgMd5;
    NSString *attachedText;
    NSMutableArray *attachedEmojiMd5List;
    NSString *followMd5;
    unsigned long long status;
    unsigned long long failReason;
    unsigned long long retryCount;
    unsigned long long selfieEnterTime;
    unsigned long long selfieScene;
    NSString *attachedTextColor;
    NSString *lensId;
    NSString *_tempFilePath;
    NSString *_uploadFilePath;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool addToTop; // @synthesize addToTop;
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @synthesize attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText;
@property(retain, nonatomic) NSString *attachedTextColor; // @synthesize attachedTextColor;
- (id)bufferWithOffset:(unsigned int)arg1 maxLen:(unsigned int)arg2;
- (id)dataOfEmoticon;
@property(readonly, nonatomic) unsigned long long emoticonType;
@property(nonatomic) unsigned long long failReason; // @synthesize failReason;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isSelfie; // @synthesize isSelfie;
@property(readonly, nonatomic) _Bool isUploadDirectly;
@property(nonatomic) _Bool isUploadWxam; // @synthesize isUploadWxam;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId;
@property(nonatomic) _Bool needAsyncUpload; // @synthesize needAsyncUpload;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount;
- (_Bool)saveImgDataToPath:(id)arg1 withImgData:(id)arg2;
- (_Bool)saveImgDataToTempPathWithImgData:(id)arg1;
- (_Bool)saveImgDataToUploadPathWithImgData:(id)arg1;
@property(nonatomic) unsigned long long selfieEnterTime; // @synthesize selfieEnterTime;
@property(nonatomic) unsigned long long selfieScene; // @synthesize selfieScene;
@property(nonatomic) unsigned long long status; // @synthesize status;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(retain, nonatomic) NSString *uploadFilePath; // @synthesize uploadFilePath=_uploadFilePath;
@property(retain, nonatomic) NSString *uploadImgMd5; // @synthesize uploadImgMd5;
- (unsigned int)totalLenOfData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

