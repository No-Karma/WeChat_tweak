//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCanvasComponentReportBasicInfo.h"

@class WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportStreamVideoInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _streamVideoDuraion;
    unsigned int _playTimeInterval;
    unsigned int _playCount;
    unsigned int _playCompletedCount;
    unsigned int _clickPlayControlCount;
    unsigned int _clickVoiceControlCount;
    unsigned int _isAutoPlay;
    WCCanvasComponentReportUrlInfo *_thumbUrlInfo;
    WCCanvasComponentReportUrlInfo *_streamVideoUrlInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clickPlayControlCount; // @synthesize clickPlayControlCount=_clickPlayControlCount;
@property(nonatomic) unsigned int clickVoiceControlCount; // @synthesize clickVoiceControlCount=_clickVoiceControlCount;
- (id)dictionaryRepresentation;
- (id)initWithCid:(id)arg1;
@property(nonatomic) unsigned int isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) unsigned int playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int playTimeInterval; // @synthesize playTimeInterval=_playTimeInterval;
@property(nonatomic) unsigned int streamVideoDuraion; // @synthesize streamVideoDuraion=_streamVideoDuraion;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *streamVideoUrlInfo; // @synthesize streamVideoUrlInfo=_streamVideoUrlInfo;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *thumbUrlInfo; // @synthesize thumbUrlInfo=_thumbUrlInfo;

@end

