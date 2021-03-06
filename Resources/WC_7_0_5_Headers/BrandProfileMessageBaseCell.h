//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class BrandProfileMessageBaseViewModel, CAGradientLayer, CALayer, MMUILabel, MMWebImageView, RichTextView;

@interface BrandProfileMessageBaseCell : MMTableViewCell
{
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMWebImageView *m_coverImageView;
    MMUILabel *m_dateLabel;
    MMUILabel *m_friendReadLabel;
    CALayer *m_itemHighlightLayer;
    CALayer *m_separateLayer;
    CAGradientLayer *m_maskLayer;
    _Bool m_bIsForceHighlight;
    id <BrandProfileMessageBaseCellDelegate> _delegate;
    BrandProfileMessageBaseViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)addCornerToContentView:(unsigned long long)arg1;
@property(readonly, nonatomic) MMWebImageView *coverImageView;
@property(nonatomic) __weak id <BrandProfileMessageBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initCoverImageView;
- (void)initCoverMaskLayer;
- (void)initDigestLabel;
- (void)initFriendsReadLabel;
- (void)initItemHighlightLayer;
- (void)initNormalReaderItem;
- (void)initSeparateLayer;
- (void)initTitleLabel;
- (void)initTopReaderItem;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)onUpdateViewModel;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateViewModel:(id)arg1;
@property(readonly, nonatomic) BrandProfileMessageBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

