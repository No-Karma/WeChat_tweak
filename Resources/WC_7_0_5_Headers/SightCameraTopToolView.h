//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUIButton, UIButton;

@interface SightCameraTopToolView : UIView
{
    _Bool _isRecording;
    long long _flashMode;
    UIButton *_closeButton;
    unsigned long long _toolItems;
    MMUIButton *_cameraSwitchButton;
    CDUnknownBlockType _switchCameraBlock;
    CDUnknownBlockType _closeButtonBlock;
}

+ (long long)flashModeWithToolFlashMode:(long long)arg1;
+ (long long)torchModeWithToolFlashMode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cameraSwitchButton; // @synthesize cameraSwitchButton=_cameraSwitchButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType closeButtonBlock; // @synthesize closeButtonBlock=_closeButtonBlock;
- (void)dealloc;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (id)initWithFrame:(struct CGRect)arg1 toolItems:(unsigned long long)arg2;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void)onCloseButtonClicked;
@property(nonatomic) long long orientation;
- (void)rotateToOrientation:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType switchCameraBlock; // @synthesize switchCameraBlock=_switchCameraBlock;
@property(nonatomic) unsigned long long toolItems; // @synthesize toolItems=_toolItems;
- (void)setupView;
- (void)switchCamera;
- (void)updateCameraAccessibility;
- (void)updateSwitchCameraImage:(id)arg1 frame:(struct CGRect)arg2;

@end

