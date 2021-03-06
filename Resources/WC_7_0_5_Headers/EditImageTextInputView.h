//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageColorSquareBarDelegate.h"
#import "IUiUtilExt.h"
#import "UITextViewDelegate.h"
#import "textViewDelegate.h"

@class EditImageColorSquareBar, EditImageTextView, NSString, UIButton, UIColor, UIView;

@interface EditImageTextInputView : MMUIView <textViewDelegate, UITextViewDelegate, IUiUtilExt, EditImageColorSquareBarDelegate>
{
    EditImageTextView *_inputView;
    UIButton *_textStyleBtn;
    UIButton *_cancelBtn;
    UIView *_colorBarContainerView;
    EditImageColorSquareBar *_colorBar;
    UIColor *_textColor;
    MMUIView *_translucentView;
    struct CGRect _editViewFrame;
    unsigned long long _textStyle;
    EditImageTextInputView *_tempTextInputView;
    id <EditImageTextInputDelegate> _delegate;
    NSString *_textStr;
    UIView *_textView;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EditImageTextInputDelegate> _delegate; // @synthesize _delegate;
@property(copy, nonatomic) NSString *_textStr; // @synthesize _textStr;
@property(retain, nonatomic) UIView *_textView; // @synthesize _textView;
- (void)addBlur;
- (void)addTranslucent;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)dropDownAndRemove;
- (id)initWithDelegate:(id)arg1 withDefaultText:(id)arg2 defaultColor:(id)arg3 editViewFrame:(struct CGRect)arg4 style:(unsigned long long)arg5;
- (id)initWithDelegate:(id)arg1 withDefaultText:(id)arg2 defaultColor:(id)arg3 editViewFrame:(struct CGRect)arg4 style:(unsigned long long)arg5 confirmBtnColor:(id)arg6;
- (id)initWithEditViewFrame:(struct CGRect)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)onCancel;
- (void)onConfirm;
- (void)onMainWindowFrameChanged;
- (void)onTextStyleChange;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

