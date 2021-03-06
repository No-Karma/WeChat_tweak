//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonCustomAddLogicControllerDelegate.h"
#import "SharePreConfirmViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"
#import "WebAddContactDelegate.h"

@class AVAudioPlayer, CEmoticonWrap, CMessageWrap, ContactUpdateHelper, EmoticonBoardView, EmoticonCustomAddLogicController, MMEmoticonView, MMTableView, MMUILabel, NSString, SharePreConfirmView, UIButton, UIImageView, UIView, WCRedEnvelopesCommentInputToolView, WCUITextField;

@interface WCRedEnvelopesRedEnvelopesDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCActionSheetDelegate, SharePreConfirmViewDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    _Bool m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    AVAudioPlayer *luckyPlayer;
    AVAudioPlayer *whistlePlayer;
    UIButton *tailBtn;
    UIView *oBottomView;
    _Bool hasChangeBackgroundY;
    UIView *headImageView;
    _Bool m_bEnterpriseRedEnvelopes;
    _Bool _bIsEmoticonBoardViewShow;
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
    unsigned int m_uiStatFromScene;
    ContactUpdateHelper *_m_helperForSenderNickName;
    ContactUpdateHelper *_m_helperForSenderNickNameAnimation;
    UIView *_m_pinImageViewAnimation;
    UIView *_m_pinImageView;
    MMEmoticonView *_emoticonView;
    UIButton *_thxEmoticonBtn;
    UIButton *_thxEmoticonTipsBtn;
    MMEmoticonView *_thxEmoticonView;
    UIImageView *_thxEmoticonBkgView;
    UIButton *_sendThxEmoticonBtn;
    CEmoticonWrap *_thxEmoticonWrap;
    UIImageView *_changeIconImgView;
    UIImageView *_loadingImgView;
    MMUILabel *_loadingLabel;
    EmoticonBoardView *_emoticonBoardView;
    EmoticonCustomAddLogicController *_emoticonCustomAddLogic;
    UIView *_selectEmoticonMaskView;
    double _maskViewBottom;
    UIView *_emoticonBoardViewTopMaskView;
    SharePreConfirmView *_sharePreConfirmView;
    CMessageWrap *_thxEmoticonMsgWrap;
    UIButton *_bottomTailBtn;
}

- (void).cxx_destruct;
- (id)GetCurrentViewController;
- (id)GetHeaderView:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)GetViewFooter;
- (id)GetViewHeader:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnToolViewDissmiss;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (void)SendTextMessageToolView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)addBorderViewBottomAtView:(id)arg1;
- (void)animationForLabel;
@property(nonatomic) _Bool bIsEmoticonBoardViewShow; // @synthesize bIsEmoticonBoardViewShow=_bIsEmoticonBoardViewShow;
@property(retain, nonatomic) UIButton *bottomTailBtn; // @synthesize bottomTailBtn=_bottomTailBtn;
@property(retain, nonatomic) UIImageView *changeIconImgView; // @synthesize changeIconImgView=_changeIconImgView;
- (void)commentRedEnvelopes;
- (id)currentViewController;
- (void)dealloc;
- (void)deleteSelctedEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)dismissDetailViewController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIView *emoticonBoardViewTopMaskView; // @synthesize emoticonBoardViewTopMaskView=_emoticonBoardViewTopMaskView;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonCustomAddLogic; // @synthesize emoticonCustomAddLogic=_emoticonCustomAddLogic;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (void)emotionViewClick;
@property(nonatomic) int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // @synthesize enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (_Bool)enableAnswerBySelfie;
- (id)generateEmitterLayer:(_Bool)arg1 withColors:(id)arg2;
- (id)getAnimationView:(id)arg1;
- (id)getBottomView;
- (id)getHeaderImageViewWithImgSize:(double)arg1;
- (id)getLastSelectEmoticonPid;
- (id)getNoMoreBottomView;
- (id)getShowResourceDetailView;
- (id)getTailButton;
- (void)gotoBalanceDetail;
- (void)gotoUrl;
- (_Bool)handleAddCameraEmoji;
- (void)handleEmoticonBoardViewMaskViewTap;
- (void)handleGetEmoticonWrap;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)handleTailOperation;
- (void)handleThxEmoticonTap;
- (_Bool)hasEmoticon;
- (id)init;
- (void)initNavigationBar;
- (void)initTableView;
- (_Bool)isDetailFromMessageScene;
- (id)lastThxEmoticonMd5;
- (unsigned int)lastThxEmoticonType;
- (void)loadMoreOrderList;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) _Bool m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName; // @synthesize m_helperForSenderNickName=_m_helperForSenderNickName;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickNameAnimation; // @synthesize m_helperForSenderNickNameAnimation=_m_helperForSenderNickNameAnimation;
@property(retain, nonatomic) UIView *m_pinImageView; // @synthesize m_pinImageView=_m_pinImageView;
@property(retain, nonatomic) UIView *m_pinImageViewAnimation; // @synthesize m_pinImageViewAnimation=_m_pinImageViewAnimation;
@property(nonatomic) unsigned int m_uiStatFromScene; // @synthesize m_uiStatFromScene;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (void)makeSelfieEmoitcon;
@property(nonatomic) double maskViewBottom; // @synthesize maskViewBottom=_maskViewBottom;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onSendButtonClicked;
- (void)onTakePhotoCancelled;
- (void)refreshViewWithData:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (void)saveSendThxEmoticonWrap;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UIView *selectEmoticonMaskView; // @synthesize selectEmoticonMaskView=_selectEmoticonMaskView;
- (void)selectThxEmoticonBtnClick;
- (void)selectThxEmoticonTopBtnClick;
@property(retain, nonatomic) UIButton *sendThxEmoticonBtn; // @synthesize sendThxEmoticonBtn=_sendThxEmoticonBtn;
- (void)sendThxEmoticonBtnClick;
- (void)setDelegate:(id)arg1;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)setLeftCloseBarButton;
- (void)setSelectedEmoticonMaskViewHidden:(_Bool)arg1 deltaY:(double)arg2;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) UIImageView *thxEmoticonBkgView; // @synthesize thxEmoticonBkgView=_thxEmoticonBkgView;
@property(retain, nonatomic) UIButton *thxEmoticonBtn; // @synthesize thxEmoticonBtn=_thxEmoticonBtn;
@property(retain, nonatomic) CMessageWrap *thxEmoticonMsgWrap; // @synthesize thxEmoticonMsgWrap=_thxEmoticonMsgWrap;
@property(retain, nonatomic) UIButton *thxEmoticonTipsBtn; // @synthesize thxEmoticonTipsBtn=_thxEmoticonTipsBtn;
@property(retain, nonatomic) MMEmoticonView *thxEmoticonView; // @synthesize thxEmoticonView=_thxEmoticonView;
@property(retain, nonatomic) CEmoticonWrap *thxEmoticonWrap; // @synthesize thxEmoticonWrap=_thxEmoticonWrap;
- (void)showLuckyAnimationWithLuckyData:(id)arg1 needWhistle:(_Bool)arg2 withWhistleData:(id)arg3;
- (void)showSharePreConfirmView;
- (_Bool)showSmallShareButton;
- (void)startOpenAnimation;
- (void)statExpourseOperation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)watchMyRedEnvelopesList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

