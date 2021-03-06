//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FinancialInfo;

@interface WCPayLQTTipsPanelView : UIView
{
    FinancialInfo *_financialInfo;
    id <WCPayLQTTipsPanelViewDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)confirmBtnClick;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayLQTTipsPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
@property(retain, nonatomic) FinancialInfo *financialInfo; // @synthesize financialInfo=_financialInfo;
- (void)handleTap;
- (id)initTipsPanelViewWithDelegate:(id)arg1 lqtFinancialInfoData:(id)arg2;
- (void)setupContentView;
- (void)showInView:(id)arg1;

@end

