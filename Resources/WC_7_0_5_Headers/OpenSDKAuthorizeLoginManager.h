//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMAuthorizeViewControllerDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMUIViewController, NSMutableArray, NSString, OauthScopeInfo, WOAPPrivacyConfirmLogic;

@interface OpenSDKAuthorizeLoginManager : MMObject <MMAuthorizeViewControllerDelegate, PBMessageObserverDelegate, MMTipsViewControllerDelegate>
{
    _Bool _isBanModifyAvatar;
    _Bool _isUseNewPage;
    _Bool _needNotifySvrWhenConfirm;
    unsigned int _avatarLimit;
    unsigned int _defaultAvatarId;
    unsigned int _selectedAvatarId;
    int _errCode;
    unsigned int _sessionID;
    unsigned int _stayStartTime;
    NSString *_appId;
    NSString *_scope;
    NSString *_state;
    NSString *_bundleId;
    MMUIViewController *_baseVC;
    id <OpenSDKAuthorizeLoginManagerDelegate> _delegate;
    NSString *_appName;
    NSString *_iconUrl;
    NSMutableArray *_avatarList;
    NSString *_defaultAvatarImgUrl;
    NSString *_defaultAvatarImgFileId;
    OauthScopeInfo *_userInfoScope;
    OauthScopeInfo *_friendsInfoScope;
    NSMutableArray *_arrOtherScopeInfo;
    NSMutableArray *_arrComfirmScopeInfo;
    unsigned long long _curStep;
    NSString *_confirmRediretUrl;
    NSString *_errMsg;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    unsigned long long _stepStartTime;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSMutableArray *arrComfirmScopeInfo; // @synthesize arrComfirmScopeInfo=_arrComfirmScopeInfo;
@property(retain, nonatomic) NSMutableArray *arrOtherScopeInfo; // @synthesize arrOtherScopeInfo=_arrOtherScopeInfo;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) MMUIViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)checkSendConfirmOprationToSvrWithScopes:(id)arg1;
@property(retain, nonatomic) NSString *confirmRediretUrl; // @synthesize confirmRediretUrl=_confirmRediretUrl;
@property(nonatomic) unsigned long long curStep; // @synthesize curStep=_curStep;
- (void)dealloc;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(retain, nonatomic) NSString *defaultAvatarImgFileId; // @synthesize defaultAvatarImgFileId=_defaultAvatarImgFileId;
@property(retain, nonatomic) NSString *defaultAvatarImgUrl; // @synthesize defaultAvatarImgUrl=_defaultAvatarImgUrl;
@property(nonatomic) __weak id <OpenSDKAuthorizeLoginManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doOAuthComfirm:(id)arg1 fromVC:(id)arg2;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) OauthScopeInfo *friendsInfoScope; // @synthesize friendsInfoScope=_friendsInfoScope;
- (void)handleConfirmResp:(id)arg1;
- (void)handleOauthResponse:(id)arg1;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)initDataWithResp:(id)arg1;
- (void)initScopeInfo:(id)arg1;
- (id)initWithAppId:(id)arg1 scope:(id)arg2 state:(id)arg3 bundleId:(id)arg4;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(nonatomic) _Bool isUseNewPage; // @synthesize isUseNewPage=_isUseNewPage;
- (void)loadDataFromSvr;
@property(nonatomic) _Bool needNotifySvrWhenConfirm; // @synthesize needNotifySvrWhenConfirm=_needNotifySvrWhenConfirm;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onScopeViewControllerClose:(id)arg1;
- (void)onScopeViewControllerConfirm:(id)arg1;
- (void)onScopeViewControllerDeny:(id)arg1;
@property(retain, nonatomic) WOAPPrivacyConfirmLogic *privacyConfirmLogic; // @synthesize privacyConfirmLogic=_privacyConfirmLogic;
- (void)reportAuthCostTime:(unsigned int)arg1 errCode:(int)arg2;
- (void)reportAuthOperate:(unsigned long long)arg1 step:(unsigned long long)arg2 isShowAuthView:(_Bool)arg3 errCode:(int)arg4;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
- (void)sendAuthorizeComfirmCGI:(id)arg1;
- (void)sendCancelOprationToSvr;
- (void)sendConfirmOprationToSvrWithScopes:(id)arg1;
- (void)sendDenyOperationToSvr;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) unsigned int stayStartTime; // @synthesize stayStartTime=_stayStartTime;
@property(nonatomic) unsigned long long stepStartTime; // @synthesize stepStartTime=_stepStartTime;
@property(retain, nonatomic) OauthScopeInfo *userInfoScope; // @synthesize userInfoScope=_userInfoScope;
- (void)showErrCode:(int)arg1 errMsg:(id)arg2;
- (void)startFriendsAuthorizeWithAnimated:(_Bool)arg1;
- (void)startLogic;
- (void)startOtherScopeAuthorizeWithAnimated:(_Bool)arg1;
- (void)startUserInfoAuthorizeWithAnimated:(_Bool)arg1;
- (void)startWorkFlow;
- (_Bool)stepToNextStepByComfirm:(_Bool)arg1 interrupt:(_Bool *)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

