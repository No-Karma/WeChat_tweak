//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "ILinkEventExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WAProfileHeaderViewDelegate.h"
#import "WAProfileLikeListCellDelegate.h"
#import "WAProfilePreviewCellDelegate.h"
#import "WCActionSheetDelegate.h"

@class ForwardMessageLogicController, MMTableView, NSDictionary, NSMutableArray, NSString, RichTextView, UIView, WAContact, WAProfileHeaderView, WAProfileLogicController;

@interface NewWAProfileViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, WCActionSheetDelegate, WAProfileHeaderViewDelegate, ForwardMessageLogicDelegate, WAProfileLikeListCellDelegate, WAProfilePreviewCellDelegate, ILinkEventExt>
{
    WAProfileLogicController *_logicController;
    ForwardMessageLogicController *_forwardLogic;
    MMTableView *_tableView;
    WAProfileHeaderView *_headerView;
    NSMutableArray *_sectionHeaderList;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_aboutOriginalViewContainer;
    RichTextView *_aboutOriginalView;
    _Bool _isEnterStatReported;
    unsigned int _fromAppVersion;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    NSDictionary *_exposeExtraInfo;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    NSString *_userName;
    WAContact *_contact;
}

- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (id)createFeedBackCell;
- (id)createLikeListCell;
- (id)createPreviewCell;
- (id)createRelatedBrandCell;
- (id)createRelatedWeAppCell;
- (void)didBeginPreview:(_Bool)arg1;
- (void)didEndPreviewVideo:(unsigned long long)arg1;
- (void)enterProfileStatReport:(unsigned int)arg1;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSDictionary *exposeExtraInfo; // @synthesize exposeExtraInfo=_exposeExtraInfo;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
- (id)getCurrentViewController;
- (id)getItemData;
- (id)getNavigationController;
- (void)initCustomNavItems;
- (void)initHeaderViewIfNeed:(id)arg1;
- (void)initTableView;
- (id)initWithUsername:(id)arg1;
@property(nonatomic) _Bool isEnterStatReported; // @synthesize isEnterStatReported=_isEnterStatReported;
- (void)leaveProfileStatReport;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked;
- (void)onClickNavRightButton;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onJumpAllLikeList;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMyLikeStatusChanged:(_Bool)arg1;
- (void)onOriginalButtonClicked:(id)arg1;
- (void)onSelectFeedBackCell;
- (void)onSelectRelatedBrandCell;
- (void)onSelectRelatedWeAppCell;
- (void)onShareButtonClicked:(id)arg1;
- (void)openBrandContact:(id)arg1;
- (void)originalJump:(unsigned long long)arg1 JumpURL:(id)arg2;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
- (void)profileCommonReport:(unsigned long long)arg1;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2 ShareId:(id)arg3;
- (void)reloadData;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)shareStatReport:(id)arg1 Result:(unsigned long long)arg2;
- (void)showTipsViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateHeaderViewWithEvaluateInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

