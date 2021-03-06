//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class MMWebImageView, NSString, UIButton, UIImage, UILabel, UITextField;

@interface ShareToGoodLookComfirmView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _sendBlock;
    NSString *_title;
    NSString *_detailText;
    NSString *_editPlaceHolder;
    UIImage *_thumbImage;
    NSString *_thumbImageURL;
    UIView *_maskView;
    UILabel *_titleLabel;
    UILabel *_detailTextLabel;
    UIView *_detailBackgroundView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UITextField *_thoughtsTextField;
    UIView *_horizationLineView;
    UIView *_verticalLineView;
    UIView *_textFieldUnderLineView;
    UILabel *_tipsLabel;
    MMWebImageView *_thumbImageView;
    double _currentKeyboardOffset;
}

- (void).cxx_destruct;
- (double)adaptedViewWidth;
- (void)applicationDidEnterBackground:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) double currentKeyboardOffset; // @synthesize currentKeyboardOffset=_currentKeyboardOffset;
- (void)dealloc;
@property(retain, nonatomic) UIView *detailBackgroundView; // @synthesize detailBackgroundView=_detailBackgroundView;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
- (void)deviceOrientationDidChange:(id)arg1;
@property(copy, nonatomic) NSString *editPlaceHolder; // @synthesize editPlaceHolder=_editPlaceHolder;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
@property(retain, nonatomic) UIView *horizationLineView; // @synthesize horizationLineView=_horizationLineView;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 editPlaceHodler:(id)arg3 thumbImage:(id)arg4 thumbImageURL:(id)arg5 sendBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
- (void)insertTips:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
- (void)onHandleCancelButtonClicked:(id)arg1;
- (void)onHandleSendButtonClicked:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(retain, nonatomic) UIView *textFieldUnderLineView; // @synthesize textFieldUnderLineView=_textFieldUnderLineView;
@property(retain, nonatomic) UITextField *thoughtsTextField; // @synthesize thoughtsTextField=_thoughtsTextField;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *thumbImageURL; // @synthesize thumbImageURL=_thumbImageURL;
@property(retain, nonatomic) MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
- (_Bool)shouldShowCoverView;
- (void)showInMaskView:(id)arg1;
- (void)showInView:(id)arg1;
- (void)showInView:(id)arg1 withTips:(id)arg2;
- (void)tapOutsideKeyboard;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (double)viewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

