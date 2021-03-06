//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class AppMMScheduleMessageViewModel, UIImageView;

@interface AppMMScheduleMessageCellView : BaseMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)layoutContentView;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, nonatomic) AppMMScheduleMessageViewModel *viewModel; // @dynamic viewModel;

@end

