//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMWebImageView, UILabel;

@interface IPadAuthSuccessContainView : UIView
{
    double _limitWidth;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMWebImageView *_appIconImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *appIconImgView; // @synthesize appIconImgView=_appIconImgView;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithAppIconUrl:(id)arg1 nickName:(id)arg2;

@end

