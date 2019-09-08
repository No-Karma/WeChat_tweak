//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIView;

@interface WAMainFrameTaskBarDotLoadingView : MMUIView
{
    double _zoomOutBeginOffset;
    double _zoomOutEndOffset;
    double _spreadBeginOffset;
    double _spreadEndOffset;
    double _centerDotZoomOutRadius;
    double _dotRadius;
    UIView *_centerDotLayer;
    UIView *_leftDotLayer;
    UIView *_rightDotLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *centerDotLayer; // @synthesize centerDotLayer=_centerDotLayer;
@property(nonatomic) double centerDotZoomOutRadius; // @synthesize centerDotZoomOutRadius=_centerDotZoomOutRadius;
- (id)dot;
@property(nonatomic) double dotRadius; // @synthesize dotRadius=_dotRadius;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *leftDotLayer; // @synthesize leftDotLayer=_leftDotLayer;
- (void)reset;
@property(retain, nonatomic) UIView *rightDotLayer; // @synthesize rightDotLayer=_rightDotLayer;
@property(nonatomic) double spreadBeginOffset; // @synthesize spreadBeginOffset=_spreadBeginOffset;
@property(nonatomic) double spreadEndOffset; // @synthesize spreadEndOffset=_spreadEndOffset;
@property(nonatomic) double zoomOutBeginOffset; // @synthesize zoomOutBeginOffset=_zoomOutBeginOffset;
@property(nonatomic) double zoomOutEndOffset; // @synthesize zoomOutEndOffset=_zoomOutEndOffset;
- (void)updateSpreadProgress:(double)arg1;
- (void)updateStepOffset:(double)arg1;
- (void)updateZoomOutProgress:(double)arg1;

@end
