//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSAudioDataProvider.h"

#import "LZAudioDataDownloadDelegate.h"

@class LZAudioDataDownloader, NSDictionary, NSString;

@interface KSRemoteAudioDataProvider : KSAudioDataProvider <LZAudioDataDownloadDelegate>
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol;
    _Bool _bReadyToParsing;
    long long _bytesParesd;
    unsigned int _parsingFlag;
    long long _parsingCnt;
    _Bool _enableLimitNet;
    _Bool _closed;
    _Bool _bPaused;
    _Bool _orgEnableLimitSetting;
    _Bool _bFirstLimitPart;
    unsigned int _retryCnt;
    unsigned int _maxRetryCnt;
    unsigned int _firstLimitTime;
    unsigned int _triggleTime;
    unsigned int _downloadTime;
    LZAudioDataDownloader *_headerDownloader;
    long long _headLastPos;
    LZAudioDataDownloader *_tailDownloader;
    id <KSAudioFileProtocol> _audioFile;
    NSString *_audioFileExt;
    NSString *_lastdownLoadUrl;
    double _lastDownloadSpeed;
    double _lastDownloadCost;
    NSDictionary *_lastDownloadDetailInfo;
    unsigned long long _cacheStatus;
    long long _lastReadingPos;
    struct _NSRange _tailDataRange;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <KSAudioFileProtocol> audioFile; // @synthesize audioFile=_audioFile;
@property(retain, nonatomic) NSString *audioFileExt; // @synthesize audioFileExt=_audioFileExt;
- (id)audioFileExtension;
@property(nonatomic) _Bool bFirstLimitPart; // @synthesize bFirstLimitPart=_bFirstLimitPart;
@property(nonatomic) _Bool bPaused; // @synthesize bPaused=_bPaused;
@property(nonatomic) _Bool bReadyToParsing; // @synthesize bReadyToParsing=_bReadyToParsing;
- (id)buildDownloadProtocol;
@property(nonatomic) unsigned long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
- (_Bool)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (void)close:(_Bool)arg1;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
- (void)dealloc;
@property(nonatomic) unsigned int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) _Bool enableLimitNet; // @synthesize enableLimitNet=_enableLimitNet;
- (long long)fileCachingLength:(long long *)arg1;
@property(nonatomic) unsigned int firstLimitTime; // @synthesize firstLimitTime=_firstLimitTime;
@property(nonatomic) long long headLastPos; // @synthesize headLastPos=_headLastPos;
@property(retain, nonatomic) LZAudioDataDownloader *headerDownloader; // @synthesize headerDownloader=_headerDownloader;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3 downloadProtocol:(id)arg4;
- (_Bool)isDataCorruption:(id)arg1;
- (_Bool)isReady;
- (void)judgeLimitDownload:(long long)arg1 addtionLen:(long long)arg2;
@property(nonatomic) double lastDownloadCost; // @synthesize lastDownloadCost=_lastDownloadCost;
@property(retain, nonatomic) NSDictionary *lastDownloadDetailInfo; // @synthesize lastDownloadDetailInfo=_lastDownloadDetailInfo;
@property(nonatomic) double lastDownloadSpeed; // @synthesize lastDownloadSpeed=_lastDownloadSpeed;
@property(nonatomic) long long lastReadingPos; // @synthesize lastReadingPos=_lastReadingPos;
@property(retain, nonatomic) NSString *lastdownLoadUrl; // @synthesize lastdownLoadUrl=_lastdownLoadUrl;
@property(nonatomic) unsigned int maxRetryCnt; // @synthesize maxRetryCnt=_maxRetryCnt;
- (void)notifyAudioFileAlreadFinished;
- (void)onAudioTask:(id)arg1 error:(id)arg2;
- (void)onAudioTask:(id)arg1 finish:(id)arg2;
- (void)onAudioTask:(id)arg1 receivedData:(id)arg2;
- (void)onAudioTask:(id)arg1 receivedHeader:(id)arg2;
@property(nonatomic) _Bool orgEnableLimitSetting; // @synthesize orgEnableLimitSetting=_orgEnableLimitSetting;
- (void)pauseDownloadData;
- (_Bool)prepareAudioData;
- (void)prepareBufferData;
- (void)prepareSeekingData:(long long)arg1;
- (void)prepareTailData:(struct _NSRange)arg1;
- (_Bool)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (void)resumeDownloadData;
@property(nonatomic) unsigned int retryCnt; // @synthesize retryCnt=_retryCnt;
- (void)retryDownloadData:(id)arg1;
- (void)setAudioFileToPlay;
@property(nonatomic) struct _NSRange tailDataRange; // @synthesize tailDataRange=_tailDataRange;
@property(retain, nonatomic) LZAudioDataDownloader *tailDownloader; // @synthesize tailDownloader=_tailDownloader;
@property(nonatomic) unsigned int triggleTime; // @synthesize triggleTime=_triggleTime;
- (void)startDownload:(id)arg1 range:(struct _LzRange)arg2 retryCnt:(unsigned int)arg3;
- (void)startLimitDownload:(long long)arg1;
- (void)tryParsingAudioInfo;
@property(readonly, nonatomic) id <KSAudioPlayerUserDefineProtocol> userProtocol; // @synthesize userProtocol=_userProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
