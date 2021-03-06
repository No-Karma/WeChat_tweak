//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface LKParticleSystem : NSObject
{
    float _preheat;
    NSMutableArray *_emitterList;
    long long _drawIndex;
}

- (void).cxx_destruct;
- (void)clearResource;
@property(nonatomic) long long drawIndex; // @synthesize drawIndex=_drawIndex;
- (void)emitParticle:(union _GLKVector3)arg1;
@property(retain, nonatomic) NSMutableArray *emitterList; // @synthesize emitterList=_emitterList;
- (_Bool)hasAudio;
- (_Bool)hasTouchElement;
- (id)init;
- (void)loadFromFiles:(id)arg1;
- (void)loadFromPath:(id)arg1;
@property(nonatomic) float preheat; // @synthesize preheat=_preheat;
- (void)preloadResource;
- (void)setAudioEnable:(_Bool)arg1;
- (void)startEmit:(union _GLKVector3)arg1;
- (void)stopEmit;
- (void)undo;
- (void)update:(double)arg1;
- (void)updateEmitPos:(union _GLKVector3)arg1;
- (void)updateParticleAttributes;

@end

