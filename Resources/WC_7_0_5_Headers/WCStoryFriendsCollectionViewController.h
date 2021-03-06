//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCStoryTimelineDataVMExt.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCStoryDismissInteractiveTransitionDelegate.h"

@class MMUIButton, MMUIView, NSMutableArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, WCStoryDismissInteractiveTransition, WCStoryFriendsCollectionDismissTransition, WCStoryReportUtil, WCStoryTimelineDataUnit, WCStoryTimelineDataVM;

@interface WCStoryFriendsCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCStoryDismissInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate, IWCStoryTimelineDataVMExt>
{
    _Bool _isCleanUnreadStory;
    id <WCStoryFriendsCollectionViewControllerDelegate> _delegate;
    WCStoryReportUtil *_storyReportUtil;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryTimelineDataVM *_storyTimelineDataVM;
    WCStoryTimelineDataUnit *_storyTimelineDataUnit;
    NSMutableArray *_timestampUnreadCellModelArray;
    NSMutableArray *_timestampReadCellModelArray;
    NSMutableArray *_unreadCornerMessageCellModelArray;
    MMUIButton *_closeButton;
    MMUIView *_topView;
    MMUIView *_contentView;
    MMUIButton *_backgroundButton;
    UIPanGestureRecognizer *_panGesture;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    WCStoryFriendsCollectionDismissTransition *_dismissAnimateTransition;
    WCStoryDismissInteractiveTransition *_dimissInteractiveTransition;
    UILabel *_emptyTipsLabel;
    UIButton *_cleanButton;
    unsigned long long _clickClearCount;
    unsigned long long _clickRenewCount;
}

- (void).cxx_destruct;
- (void)addPopBackInteractivePopGesture;
- (id)animationControllerForDismissedController:(id)arg1;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
- (struct CGSize)cellSize;
@property(nonatomic) __weak UIButton *cleanButton; // @synthesize cleanButton=_cleanButton;
- (void)cleanUnreadStory;
@property(nonatomic) unsigned long long clickClearCount; // @synthesize clickClearCount=_clickClearCount;
@property(nonatomic) unsigned long long clickRenewCount; // @synthesize clickRenewCount=_clickRenewCount;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
- (id)createCleanButton;
- (void)dealloc;
@property(nonatomic) __weak id <WCStoryFriendsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectUnreadCornerMessageActionWithIndex:(unsigned long long)arg1;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *dimissInteractiveTransition; // @synthesize dimissInteractiveTransition=_dimissInteractiveTransition;
@property(retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
@property(nonatomic) _Bool isCleanUnreadStory; // @synthesize isCleanUnreadStory=_isCleanUnreadStory;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onClickClean;
- (void)onClickClose;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
- (void)reportCleanExposeData;
- (void)reportExposeData;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(retain, nonatomic) WCStoryTimelineDataUnit *storyTimelineDataUnit; // @synthesize storyTimelineDataUnit=_storyTimelineDataUnit;
@property(retain, nonatomic) WCStoryTimelineDataVM *storyTimelineDataVM; // @synthesize storyTimelineDataVM=_storyTimelineDataVM;
@property(retain, nonatomic) NSMutableArray *timestampReadCellModelArray; // @synthesize timestampReadCellModelArray=_timestampReadCellModelArray;
@property(retain, nonatomic) NSMutableArray *timestampUnreadCellModelArray; // @synthesize timestampUnreadCellModelArray=_timestampUnreadCellModelArray;
@property(retain, nonatomic) MMUIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSMutableArray *unreadCornerMessageCellModelArray; // @synthesize unreadCornerMessageCellModelArray=_unreadCornerMessageCellModelArray;
- (void)setupCollectionViewWithGradientEffect;
- (void)setupData;
- (void)setupUI;
- (_Bool)shouldShowMessageSection:(unsigned long long)arg1;
- (_Bool)shouldTimelineUnReadSection:(unsigned long long)arg1;
- (void)storyTimelineDataItemsHasUpdate;
- (_Bool)useBlackStatusbar;
- (id)userNameStrFromDataUnits:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

