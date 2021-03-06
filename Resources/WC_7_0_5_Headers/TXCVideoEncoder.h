//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TXIVideoEncoder;

@interface TXCVideoEncoder : NSObject
{
    _Bool _isRunning;
    int _encoderType;
    TXIVideoEncoder *_videoEncoder;
}

+ (id)encoder:(int)arg1;
+ (_Bool)hasEncoder:(int)arg1;
+ (_Bool)supportMultipassEncoding;
- (void).cxx_destruct;
- (void)createEncoderWithType:(int)arg1;
- (void)dealloc;
- (void)enableNearestRPS:(long long)arg1;
- (long long)encodeFrameCount;
@property(nonatomic) int encoderType; // @synthesize encoderType=_encoderType;
- (void)finishPushSampleBuffer;
- (id)initBy:(int)arg1;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)realBitrate;
- (long long)realFPS;
- (long long)realGop;
- (void)restartIDR;
- (void)setBitrate:(long long)arg1;
- (void)setBitrateFromQos:(long long)arg1 totalBitrate:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEncodeFps:(long long)arg1;
- (void)setEncodeIdrFpsFromQos:(long long)arg1;
- (void)setFirstPassEncodeFinished:(CDUnknownBlockType)arg1;
- (void)setID:(id)arg1;
- (void)setNotifyDelegate:(id)arg1;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
@property(retain) TXIVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (long long)stop;

@end

