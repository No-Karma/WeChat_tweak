//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMinimizeTaskDelegateInterface.h"
#import "MMService.h"
#import "MMTipsViewControllerDelegate.h"
#import "WAAppTaskDelegate.h"
#import "WAGameTaskMgrExt.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString, WAMemoryPressureRecord, WATopSessionTaskInfoStorage;

@interface WAAppTaskMgr : MMService <IMinimizeTaskDelegateInterface, WAAppTaskDelegate, WAGameTaskMgrExt, MMTipsViewControllerDelegate, MMService>
{
    NSMutableArray *_arrJumpList;
    MMTimer *_timerCheckBackgroundTask;
    NSString *_curBackToChatAppID;
    NSString *_curBackToChatDefaultName;
    WATopSessionTaskInfoStorage *_topSessionTaskInfoStorage;
    NSString *_curRemoteDebugAppID;
    NSString *_curRemoteDebugQrCodeID;
    _Bool _shouldShowMemAlertWhenProtectSimulatedWeApp;
    NSMutableArray *_tmpWebviewForMemTest;
    NSObject<OS_dispatch_source> *_memoryWarningLevelSource;
    NSMutableDictionary *_dicAppID2Task;
    unsigned long long _lastMemoryWaringTimeStamp;
    unsigned long long _lastMemoryWarningPressureFlag;
    unsigned long long _currentMemoryWarningPressureFlag;
    WAMemoryPressureRecord *_memoryPressureRecord;
}

+ (id)genTitleTailWithDebugMode:(unsigned int)arg1;
+ (id)minimizationTaskKeyWithAppID:(id)arg1 debbugMode:(unsigned int)arg2;
+ (id)minimizeTaskDataFromWeAppTask:(id)arg1 isManually:(_Bool)arg2;
- (void).cxx_destruct;
- (void)addJumpWeAppRelationIfHave:(id)arg1;
- (void)addJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)addNativeJumpWeAppRefererInfoIfHave:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3;
- (id)allGameViewController;
- (id)allTaskArray;
- (unsigned int)backgroundLocatingAppCount;
- (id)backgroundLocatingAppList;
- (void)callOnTerminateAppID:(id)arg1;
- (_Bool)canMinimizeAppTaskOrShowTips:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (void)checkGameAppBackgroundTask:(id)arg1;
- (void)clearJumpList;
- (void)closeAllTaskUseTips:(_Bool)arg1 tipTitle:(id)arg2 tipContent:(id)arg3 includeForeSimulatedNative:(_Bool)arg4 reason:(unsigned long long)arg5;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2;
- (void)closeGameTaskOnNavigationController:(id)arg1;
- (void)closeTask:(id)arg1;
- (void)closeTask:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTaskWithAppID:(id)arg1;
- (void)closeTaskWithAppID:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTimeoutBackgoundTask;
@property(nonatomic) unsigned long long currentMemoryWarningPressureFlag; // @synthesize currentMemoryWarningPressureFlag=_currentMemoryWarningPressureFlag;
- (unsigned int)currentSharedResourceBackgroundAppCount;
- (void)dealloc;
- (void)deleteTask:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dicAppID2Task; // @synthesize dicAppID2Task=_dicAppID2Task;
- (void)endRemoteDebugIfNeededForAppid:(id)arg1;
- (void)fireMemoryWarningEventToActiveTasks;
- (id)firstAppIdFromRootViewController:(id)arg1;
- (void)genWebviewForMemWarning;
- (void)generateJumpWeAppOperation:(id *)arg1 withAppId:(id)arg2 extInfo:(id)arg3;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 taskExtInfo:(id)arg3 debugModeType:(unsigned int)arg4 isNewTask:(_Bool *)arg5 isJumpFromWeApp:(_Bool)arg6;
- (id)getAppIdListFromJumpWeAppList;
- (unsigned long long)getAppTaskCount;
- (id)getAppTaskWithMinimizationTaskKey:(id)arg1;
- (id)getCurrentBackToChatAppId;
- (id)getCurrentBackToChatAppTask;
- (id)getCurrentBackToChatAppTaskBannerLogoUrl;
- (id)getCurrentBackToChatAppTaskBannerText;
- (unsigned long long)getCurrentBackToChatDebugType;
- (id)getCurrentBackToChatRelativePath;
- (id)getCurrentBackToChatStackPaths;
- (id)getCurrentRemoteDebugAppID;
- (id)getCurrentRemoteDebugQrCodeID;
- (id)getForegroundAppID;
- (unsigned long long)getJumpRoleWithAppId:(id)arg1;
- (void)getJumpWeAppLastInfo:(id *)arg1 fromInfo:(id *)arg2 withAppId:(id)arg3;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (id)getTaskWithAppID:(id)arg1;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (_Bool)hasGameTaskOnNavigationController:(id)arg1;
- (id)init;
- (void)invadateCheckBackgroundTaskTimer;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (_Bool)isAppTaskManuallyMinimized:(id)arg1;
- (_Bool)isAppTaskMinimized:(id)arg1;
- (_Bool)isAppTaskSupportMinimization:(id)arg1;
- (_Bool)isExistAppInnerAudioPlaying;
- (_Bool)isExistAppLiveForegroundPlaying;
- (_Bool)isExistAppLivePlaying;
- (_Bool)isExistAppLivePushing;
- (_Bool)isExistAppRecording;
- (_Bool)isFormJumpWeAppRingWithFromAppId:(id)arg1 toAppId:(id)arg2;
- (_Bool)isGameBackgroundTaskAllowToClose:(id)arg1;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isReachMaxSharedResourceBackgroundAppCount;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (_Bool)isWeAppScreenOn;
- (_Bool)isWeAppStatusBarHidden;
- (void)jumpWeAppCateGoryOnServiceClearData;
- (void)jumpWeAppCategoryOnServiceInit;
- (void)jumpWeAppCategoryOnServiceReloadData;
- (id)lastAppIDWithViewController:(id)arg1;
@property(nonatomic) unsigned long long lastMemoryWaringTimeStamp; // @synthesize lastMemoryWaringTimeStamp=_lastMemoryWaringTimeStamp;
@property(nonatomic) unsigned long long lastMemoryWarningPressureFlag; // @synthesize lastMemoryWarningPressureFlag=_lastMemoryWarningPressureFlag;
- (void)loadTopSessionTaskInfo;
- (void)markBackToChatWithAppID:(id)arg1 usrName:(id)arg2 relativePath:(id)arg3 debugModeType:(unsigned long long)arg4;
- (unsigned int)maxGameTaskRunningCount;
- (unsigned int)maxSharedResourceBackgroundTaskRunningCount;
- (unsigned int)maxTaskRunningCount;
- (_Bool)maximizeAppTask:(id)arg1;
@property(retain, nonatomic) WAMemoryPressureRecord *memoryPressureRecord; // @synthesize memoryPressureRecord=_memoryPressureRecord;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningLevelSource; // @synthesize memoryWarningLevelSource=_memoryWarningLevelSource;
- (_Bool)minimizeAppTask:(id)arg1 manually:(_Bool)arg2;
- (void)onAppTaskClose:(id)arg1;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onDispatchSourceDidReceiveMemoryPressure:(unsigned long long)arg1;
- (void)onEnterTask:(id)arg1 FromFloatingView:(id)arg2 EnterTaskScene:(int)arg3;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onRemoveTask:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)openAppTaskWithContact:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 handlerWrapper:(id)arg4;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)pauseAllGame;
- (void)processJumpWeAppBeforeOpenTaskWithAppId:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 getOperation:(id *)arg4;
- (void)registerMemoryPressureRecord;
- (void)registerMemoryWarningLevelListener;
- (void)removeCurBackToChatState;
- (void)removeJumpWeAppLastInfo;
- (void)removeTopSesionTaskInfo;
- (void)reportAllAppForceCloseDoneWithForceType:(unsigned long long)arg1;
- (void)reportAllAppForceCloseWithForceType:(unsigned long long)arg1;
- (void)reportForegroundForceCloseForTask:(id)arg1 forceType:(unsigned long long)arg2;
- (void)resumeAllGame:(_Bool)arg1;
- (void)saveTopSessionTaskInfo:(id)arg1;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (_Bool)shouldShowMemAlert;
- (void)startCheckBackgroundTaskTimer;
- (void)stopActivityWithStateList:(id)arg1 AppTask:(id)arg2;
- (void)switchMemAlert;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)taskDidResignBackgroundLocating:(id)arg1;
- (void)taskDidTriggerBackgroundLocating:(id)arg1;
- (void)taskEnterBackgroundWithAppID:(id)arg1 andRelativePath:(id)arg2;
- (void)unminimizeAppTask:(id)arg1;
- (void)unregisterMemoryPressureRecord;
- (void)unregisterMemoryWarningLevelListener;
- (void)updateCurrentBackToChatState;
- (void)updateCurrentBannerText:(id)arg1;
- (void)updateCurrentRemoteDebugAppID:(id)arg1;
- (void)updateCurrentRemoteDebugQrCodeID:(id)arg1;
- (_Bool)updateMinimizedTask:(id)arg1 manually:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
