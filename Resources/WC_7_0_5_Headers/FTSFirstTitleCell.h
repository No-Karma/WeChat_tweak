//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, UILabel, UIView;

@interface FTSFirstTitleCell : MMTableViewCell
{
    UILabel *_titleLabel;
    MMHeadImageView *_headImageView;
    _Bool _bDisplayHeadView;
    UIView *_topLine;
}

- (void).cxx_destruct;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 displayHeadView:(_Bool)arg3;
- (void)updateTitle:(id)arg1;
- (void)updateTitle:(id)arg1 andHeadView:(id)arg2;

@end

