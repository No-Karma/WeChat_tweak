//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MetalImageInput.h"

@class MTLRenderPassDescriptor, MetalImageTexture, NSString;

@interface MetalImageView : UIView <MetalImageInput>
{
    MetalImageTexture *firstInputTexture;
    unsigned long long inputRotationMode;
    struct MTLFloat4 imageScalingVertics[4];
    struct MTLUInt2 inputImageSize;
    unsigned long long _fillMode;
    id <MTLBuffer> _verticsBuffer;
    id <MTLBuffer> _coordBuffer;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLDepthStencilState> _depthStencilState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    CDStruct_3ead2808 _bgClearColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_3ead2808 bgClearColor; // @synthesize bgClearColor=_bgClearColor;
- (void)buildUp;
@property(retain, nonatomic) id <MTLBuffer> coordBuffer; // @synthesize coordBuffer=_coordBuffer;
- (void)dealloc;
@property(retain, nonatomic) id <MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
- (void)fillTextureVerticsWithWidthScaling:(double)arg1 heightScaling:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)newTextureReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
- (_Bool)prepareRenderDepthStencilState;
- (_Bool)prepareRenderPassDescriptor;
- (_Bool)prepareRenderPipeline;
@property(retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputTexture:(id)arg1 atIndex:(long long)arg2;
@property(retain, nonatomic) id <MTLBuffer> verticsBuffer; // @synthesize verticsBuffer=_verticsBuffer;
- (void)tearDown;
- (void)updateInputImageSize;
- (void)updateTextureCoordinates;
- (void)updateTextureVertics;
- (void)updateViewGeometry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

