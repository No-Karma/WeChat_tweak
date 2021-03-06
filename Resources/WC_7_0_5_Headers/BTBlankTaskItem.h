//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface BTBlankTaskItem : NSObject
{
    _Bool _isSuccess;
    _Bool _isRecording;
    unsigned int _posInTL;
    unsigned int _retryCount;
    NSString *_key;
    unsigned long long _timeTotal;
    unsigned long long _timeDisk;
    unsigned long long _timeNet;
    unsigned long long _timeScroll;
    unsigned long long _timeHevc;
    NSString *_netType;
    unsigned long long _imgSize;
    unsigned long long _userVisibleTimestamp;
    NSMutableDictionary *_subTimeIsRecording;
    NSMutableDictionary *_subTimestamp;
}

- (void).cxx_destruct;
- (id)descStr;
@property(nonatomic) unsigned long long imgSize; // @synthesize imgSize=_imgSize;
- (id)initWithKey:(id)arg1;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (_Bool)isSubTimeRecordingWithScene:(int)arg1;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned int posInTL; // @synthesize posInTL=_posInTL;
- (id)reportStr;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableDictionary *subTimeIsRecording; // @synthesize subTimeIsRecording=_subTimeIsRecording;
- (void)setSubTimeIsRecording:(_Bool)arg1 forScene:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *subTimestamp; // @synthesize subTimestamp=_subTimestamp;
- (void)setSubTimestamp:(unsigned long long)arg1 forScene:(int)arg2;
@property(nonatomic) unsigned long long timeDisk; // @synthesize timeDisk=_timeDisk;
@property(nonatomic) unsigned long long timeHevc; // @synthesize timeHevc=_timeHevc;
@property(nonatomic) unsigned long long timeNet; // @synthesize timeNet=_timeNet;
@property(nonatomic) unsigned long long timeScroll; // @synthesize timeScroll=_timeScroll;
@property(nonatomic) unsigned long long timeTotal; // @synthesize timeTotal=_timeTotal;
@property(nonatomic) unsigned long long userVisibleTimestamp; // @synthesize userVisibleTimestamp=_userVisibleTimestamp;
- (_Bool)shouldReport;
- (unsigned long long)subTimestampWithScene:(int)arg1;

@end

