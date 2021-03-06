//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "ContactSettingViewControllerDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IAutoSetStrangerAttributeExt.h"
#import "IHDHeadImageViewExt.h"
#import "ILinkEventExt.h"
#import "IOpenImContactMgrExt.h"
#import "MMCPLabelDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "SendVerifyMsgViewControllerDelegate.h"
#import "WCFacadeExt.h"

@class CContact, CMessageWrap, ContactRelatedGroupLogic, MMTableViewInfo, NSMutableArray, NSString, SendVerifyMsgLogicController, UIButton, UILabel;

@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, IAutoSetStrangerAttributeExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, IHDHeadImageViewExt, MMTableViewInfoDelegate, IOpenImContactMgrExt, ContactSettingViewControllerDelegate, WCFacadeExt>
{
    _Bool m_bFirstBecomeFriend;
    UIButton *m_greenBtn;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_hasRequestUpdateAlbum;
    NSString *m_location;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    NSMutableArray *m_arrayAlbum;
    int m_curDownloadEntrance;
    CMessageWrap *m_sourceMsg;
    UILabel *m_blackListTipsLabel;
    UILabel *m_quitRoomTipsLabel;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    NSString *m_introDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    UIButton *m_remarkButton;
    UIButton *m_snsPrivacyButton;
    _Bool _m_bDisableAllOperation;
    unsigned int _m_uiFromScene;
    id <ContactInfoAssistDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)GetTableView;
- (_Bool)IsShowUserName;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addAlbumCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addAlbumSection;
- (void)addFileHelperSection;
- (void)addInviterCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addMoreCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addMsgActionView;
- (void)addPermissionSection;
- (void)addRemarkSection;
- (void)addSignatureCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addToBlackList:(id)arg1;
- (void)baseViewWillBePoped;
- (_Bool)canShowVOIPBtn;
- (_Bool)checkIsHadOpenIMContactVerify;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendReplyOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doAddContact;
- (void)doAddToBlackList;
- (void)doDeleteContact;
- (id)getAlbumView;
- (void)getChatRoomMemberContact;
- (id)getHelloMsgPanel;
- (id)getInfoDisplayName;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getPermissionIconsView;
- (id)getProfileDesViewWithCellHeight:(double)arg1;
- (id)getProfileHeadView;
- (id)getProfileIntroView;
- (struct WCTableViewSectionManager *)getSection;
- (id)getSocialInfoView;
- (id)getTagListView;
- (id)getTagNameList;
- (id)getWechatUserName;
- (void)handleAddedContact;
- (_Bool)hasMore;
- (id)init;
- (void)initAddContactBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initBlackListTipsLabel;
- (void)initData;
- (void)initDeleteBtn;
- (void)initExposeBtn;
- (void)initFooterBtnArea;
- (void)initFooterView;
- (void)initQuitRoomTipsLabel;
- (void)initSayHelloBtn;
- (void)initSendMsgBtn;
- (void)initTableView;
- (void)initVerifyBtn;
- (_Bool)initVoipBtn;
- (void)initWCPrivacyButton;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;
- (_Bool)isFromQRCode;
- (_Bool)isFromStrangeScene;
- (_Bool)isNeedCopyFromLocalContact;
- (_Bool)isNeedHideUserName;
- (_Bool)isNeedShowRightBtn;
- (_Bool)isNeedVerify;
- (_Bool)isShowAddFriendScene;
- (_Bool)isShowBlackAction;
- (_Bool)isShowExposeButton;
- (void)loadLocalContactData;
@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (void)makePhoneCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onAction;
- (void)onClickProfileIntroView;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)onExposeByRecommand;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onInviteContactClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNewMessage:(id)arg1;
- (void)onOpenIMVerifyContactOk;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onOpenVoipView;
- (void)onRelpyContact:(id)arg1;
- (void)onRestoreCPLabel:(id)arg1;
- (void)onSayHelloToContact;
- (void)onSocialInfoHandle;
- (void)onStartChat:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)onVerifyContactOk;
- (void)opBlackList:(id)arg1;
- (void)opEditRemarkName;
- (void)opSetWCPermissions;
- (void)opSetWCStrangerPermissions;
- (void)reloadTableView;
- (void)removeFromBlackList;
- (void)reportContactInfoItemClickWithReportScene:(int)arg1;
- (void)reportContactInfoItemClickWithReportScene:(int)arg1 andActionResultCode:(int)arg2;
- (void)reportContactInfoViewEnter;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)showAlbumList;
- (void)showHDHeadViewImage;
- (void)showRightButton;
- (void)tryCall:(id)arg1;
- (void)updateCPState;
- (void)updateFooterView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

