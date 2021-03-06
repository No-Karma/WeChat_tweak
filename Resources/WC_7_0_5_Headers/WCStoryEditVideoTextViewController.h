//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "InputControllerDelegate.h"

@class CAGradientLayer, EmoticonBoardView, MMGrowTextView, MMUILabel, NSString, UIView, WCInputController;

@interface WCStoryEditVideoTextViewController : MMUIViewController <InputControllerDelegate>
{
    id <WCStoryEditVideoTextViewControllerDelegate> _delegate;
    NSString *_textString;
    MMGrowTextView *_growTextView;
    WCInputController *_inputController;
    UIView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    CAGradientLayer *_inputViewGradientLayer;
    MMUILabel *_overLimitTipsLabel;
}

- (void).cxx_destruct;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (id)addGradientLayerForView:(id)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)addGrowTextView;
- (void)clickExitBtn;
@property(nonatomic) __weak id <WCStoryEditVideoTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCommitText:(id)arg1;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
- (_Bool)hidesStatusbar;
- (void)initEmoticonView;
- (void)initInputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) CAGradientLayer *inputViewGradientLayer; // @synthesize inputViewGradientLayer=_inputViewGradientLayer;
- (_Bool)isOverLimit;
- (void)overLimitExit;
@property(retain, nonatomic) MMUILabel *overLimitTipsLabel; // @synthesize overLimitTipsLabel=_overLimitTipsLabel;
@property(copy, nonatomic) NSString *textString; // @synthesize textString=_textString;
- (void)setUpTextView;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)updateOverLimitTips;
- (void)updateViewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

