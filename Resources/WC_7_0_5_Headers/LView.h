//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class AVCaptureVideoPreviewLayer, UIView;

@interface LView : UIImageView
{
    _Bool mIsCameraFront;
    AVCaptureVideoPreviewLayer *localLayer;
    UIView *m_defaultView;
    SEL selector;
    id <NSObject> targetor;
}

- (void).cxx_destruct;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)changeFrame:(struct CGRect)arg1;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1 Layer:(id)arg2;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *localLayer; // @synthesize localLayer;
@property(nonatomic) _Bool mIsCameraFront; // @synthesize mIsCameraFront;
@property(retain, nonatomic) UIView *m_defaultView; // @synthesize m_defaultView;
- (void)randerDefaultView:(id)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)resetSmallRect;
- (void)restartRender;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(retain, nonatomic) id <NSObject> targetor; // @synthesize targetor;
- (void)stopRender;
- (void)switchLocalView:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)transformBackImage;
- (void)transformFrontImage;

@end

