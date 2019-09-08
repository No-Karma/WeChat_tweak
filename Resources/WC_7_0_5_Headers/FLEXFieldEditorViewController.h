//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class FLEXArgumentInputView, FLEXFieldEditorView, NSString, UIBarButtonItem, UIScrollView;

@interface FLEXFieldEditorViewController : UIViewController <UIScrollViewDelegate>
{
    id _target;
    FLEXFieldEditorView *_fieldEditorView;
    UIBarButtonItem *_setterButton;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)actionButtonPressed:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) FLEXFieldEditorView *fieldEditorView; // @synthesize fieldEditorView=_fieldEditorView;
@property(readonly, nonatomic) FLEXArgumentInputView *firstInputView;
- (id)initWithTarget:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIBarButtonItem *setterButton; // @synthesize setterButton=_setterButton;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (id)titleForActionButton;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
