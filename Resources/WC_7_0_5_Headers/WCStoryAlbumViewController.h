//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCStoryCollectionFooterViewDelegate.h"

@class MMUIButton, MMUILabel, NSString, UICollectionView, UICollectionViewFlowLayout, WCStoryAlbumViewModel, WCStoryCollectionFooterView, WCStoryFloatTopBar;

@interface WCStoryAlbumViewController : MMUIViewController <WCStoryCollectionFooterViewDelegate>
{
    _Bool _isNoMoreData;
    NSString *_username;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryFloatTopBar *_floatTopBar;
    WCStoryCollectionFooterView *_footerView;
    MMUIButton *_fullTimelineButton;
    MMUILabel *_noDataLabel;
    WCStoryAlbumViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCStoryFloatTopBar *floatTopBar; // @synthesize floatTopBar=_floatTopBar;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) WCStoryCollectionFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUIButton *fullTimelineButton; // @synthesize fullTimelineButton=_fullTimelineButton;
- (double)getCellWidth;
- (id)initWithUsername:(id)arg1;
@property(nonatomic) _Bool isNoMoreData; // @synthesize isNoMoreData=_isNoMoreData;
@property(retain, nonatomic) MMUILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
- (void)onClickAction;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCStoryAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)setupData;
- (void)setupUI;
- (void)updateFooterViewState;
- (void)updateHeaderViewState;
- (void)updateTipLabelState;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

