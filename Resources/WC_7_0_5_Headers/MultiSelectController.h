//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EnterpriseBrandContactSelectViewControllerDelegate.h"
#import "EnterpriseSessionSelectViewControllerDelegate.h"
#import "ForwardMessageLogicDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MMToastViewControllerDelegate.h"
#import "MsgDataSaveLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WebMailViewDelegate.h"

@class CContact, ForwardMessageLogicController, MMToastViewController, MsgDataSaveLogic, NSMutableArray, NSString, WWKMsgForwarder;

@interface MultiSelectController : MMObject <MMToastViewControllerDelegate, WCActionSheetDelegate, EnterpriseSessionSelectViewControllerDelegate, EnterpriseBrandContactSelectViewControllerDelegate, MsgDataSaveLogicDelegate, UIAlertViewDelegate, WebMailViewDelegate, ForwardMessageLogicDelegate, MFMailComposeViewControllerDelegate>
{
    NSString *m_nsChatUserName;
    NSMutableArray *m_arrSelectMsg;
    NSMutableArray *m_arrMsgCanBeOprate;
    NSMutableArray *supportContacts;
    CContact *m_toContact;
    _Bool hasAnyMsgCannotAddToFav;
    _Bool hasAnyMsgDidnotDownload;
    _Bool hasAnyMsgCannotSendtoFriend;
    _Bool hasAnyMsgCannotPackToRecord;
    _Bool hasAnyMsgCannotSendtoBrand;
    _Bool hasAnyMsgCannotSendtoEnterpriseChat;
    _Bool hasAnyMsgCannotSendByMail;
    _Bool attachTotalSizeTooLarge;
    _Bool hasAnyMsgCannotSendToWeWork;
    ForwardMessageLogicController *m_forwardMsgLogic;
    id <MultiSelectContollerDelegate> m_delegate;
    MMToastViewController *_toastview;
    _Bool packToSend;
    MsgDataSaveLogic *m_msgDataSaveLogic;
    WWKMsgForwarder *wwkMsgForwarder;
}

- (void).cxx_destruct;
- (void)CheckMsgForFavAdd;
- (void)CheckMsgForMail;
- (void)CheckMsgForSendToBrand;
- (void)CheckMsgForSendToBrandWithAlert;
- (void)CheckMsgForSendToEnterpriseChat;
- (void)CheckMsgForSendToEnterpriseChatWithAlert;
- (void)CheckMsgForSendToFriend;
- (void)EndMultiEdit;
- (_Bool)IsMsgExceedRecordSizeWithAlert:(id)arg1;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)Reset;
- (void)ResetDataWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addMsgListToFavInternal;
- (void)addMultiMsgToMyFav:(id)arg1 WithUserName:(id)arg2;
- (_Bool)canBeAddToFav:(id)arg1 singleMsg:(_Bool)arg2;
- (_Bool)canBeSendByMailCorrect:(id)arg1;
- (_Bool)canBeSendToBrand:(id)arg1;
- (_Bool)canBeSendToFriend:(id)arg1;
- (id)changeString2HtmlContent:(id)arg1;
- (_Bool)checkDidDownLoadOKRecordDataFieldAr:(id)arg1;
- (void)checkMsgForForwardToWeWork;
- (void)checkMsgForForwardToWeWorkWithAlert;
- (id)convertMsg2MailContent:(id)arg1 videoCnt:(int)arg2;
- (id)convertMsgToTextIfCannotSend:(id)arg1;
- (void)dealloc;
- (_Bool)didDownloadOK:(id)arg1;
- (void)downloadMultiMsg:(id)arg1 WithUserName:(id)arg2 saveToAlbum:(_Bool)arg3;
- (void)forwardMsgToWeWork;
- (id)getContactNickName:(id)arg1;
- (id)getCurrentViewController;
- (unsigned int)getDownloadThumbStatus:(id)arg1;
- (id)getMailNodeList;
- (id)getMultiMsgWithMsgIDList:(id)arg1 AndUserName:(id)arg2;
- (void)getSubject:(id)arg1 AndHeader:(id)arg2;
- (double)getTotalSize:(id)arg1;
- (id)getViewController;
- (void)handAlertWithEAlertViewType:(int)arg1;
- (id)init;
- (void)initMMFavAddTipView;
@property(nonatomic) __weak id <MultiSelectContollerDelegate> m_delegate; // @synthesize m_delegate;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)mimeOfFile:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)onMsgDataSaveLogicEnd:(_Bool)arg1 expiredMsgs:(id)arg2;
- (void)onSendComplete;
- (void)selectEnterpriseBrandContact;
- (void)selectEnterpriseChatSession;
- (void)sendMailByQQMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (void)sendMailBySystemMail:(id)arg1 Content:(id)arg2 Subject:(id)arg3;
- (void)sendMsgListToBrandInternal;
- (void)sendMultiMsgByMail:(id)arg1 WithUserName:(id)arg2;
- (void)sendMultiMsgByMailInternal;
- (void)sendMultiMsgToBrandContact:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)sendMultiMsgToEnterpriseChat:(id)arg1;
- (void)sendMultiMsgToEnterpriseChatBrand:(id)arg1 WithUserName:(id)arg2 To:(id)arg3;
- (void)sendMultiMsgToFriend:(_Bool)arg1;
- (void)sendMultiMsgToFriend:(id)arg1 WithUserName:(id)arg2;
- (void)showChooseMultiOrSingleView;
- (void)showEnd;
- (void)showSaveResultTip:(id)arg1 andText:(id)arg2;
- (void)sortMsgList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

