//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ContactsDataLogicDelegate.h"
#import "IWCMyStoryUserStateUtilExt.h"
#import "WCStoryFacadeExt.h"

@class ContactsDataLogic, MMTimer, NSMutableDictionary, NSString;

@interface WCStoryEntranceVM : NSObject <ContactsDataLogicDelegate, IWCMyStoryUserStateUtilExt, WCStoryFacadeExt>
{
    _Bool _shouldShowStoryEntrace;
    ContactsDataLogic *_dataLogic;
    struct NSMutableDictionary *_userContactDict;
    MMTimer *_reloadNotifyThrottle;
}

+ (id)entranceViewModel;
+ (_Bool)hasUnreadStory;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
- (void)dealloc;
- (id)getTimestampUnreadUserNameArray;
- (id)init;
- (void)notifyReloadEntrance;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onContactHasChange;
- (void)onContactsDataChange;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onMakeAllUserRelatedCommentWithUsername:(id)arg1;
- (void)onMarkStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)onPermissionsHasChanged;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)onRelatedCommentDel:(id)arg1;
- (void)onSetNewLastReadMaxTid;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
@property(retain, nonatomic) MMTimer *reloadNotifyThrottle; // @synthesize reloadNotifyThrottle=_reloadNotifyThrottle;
- (void)reloadShouldShowStoryEntrace;
- (void)sendReloadNotify;
@property(nonatomic) _Bool shouldShowStoryEntrace; // @synthesize shouldShowStoryEntrace=_shouldShowStoryEntrace;
@property(retain, nonatomic) NSMutableDictionary *userContactDict; // @synthesize userContactDict=_userContactDict;
- (void)updateUnreadStatus;
- (void)userDeleteStoryWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

