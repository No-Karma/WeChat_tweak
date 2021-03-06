//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WXCNetworkStatusDelegate.h"

@class NSMutableArray, NSString;

@interface WXCNetWorkEngine : MMService <WXCNetworkStatusDelegate, MMService>
{
    unsigned int _uiLastNetworkStatus;
    int _lastValidNetType;
    int _taskSeq;
    id <WXCNetWorkProxyDelegate> _proxyDelegate;
    NSMutableArray *_netTaskArray;
}

- (void).cxx_destruct;
- (void)WXCReachabilityChange:(unsigned int)arg1;
- (int)addTask:(id)arg1 cmdTag:(id)arg2 cmd:(int)arg3 buffer:(id)arg4 compressMethod:(int)arg5 cryptMethod:(int)arg6 router:(int)arg7 backfillData:(id)arg8;
- (void)dealloc;
- (int)doSendTask:(id)arg1 cmd:(int)arg2 cmdTag:(id)arg3 cmdBuffer:(id)arg4;
- (int)doSendTaskForceUseNetType:(int)arg1 listener:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5;
- (int)doSendTaskForceUseNetType:(int)arg1 router:(int)arg2 callback:(id)arg3 cmd:(int)arg4 cmdTag:(id)arg5 cmdBuffer:(id)arg6 backfillData:(id)arg7;
- (int)doSendTaskImpl:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5 compressMethod:(int)arg6 cryptMethod:(int)arg7 netTaskType:(int)arg8 backfillData:(id)arg9;
- (int)doSendTaskWithRouter:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5;
- (int)doSendTaskWithRouter:(int)arg1 callback:(id)arg2 cmd:(int)arg3 cmdTag:(id)arg4 cmdBuffer:(id)arg5 backfillData:(id)arg6;
- (id)findByTaskId:(int)arg1;
- (id)genCmdBodyData:(int)arg1 buffer:(id)arg2 compressMethod:(int)arg3 cryptMethod:(int)arg4 router:(int)arg5 taskId:(int)arg6 cmdTag:(id)arg7;
- (id)genReadPackageData:(id)arg1;
- (id)genWritePackageData:(id)arg1 body:(id)arg2;
- (int)getCmdCryptMethod:(int)arg1;
- (int)getCmdZipMethod:(int)arg1;
- (int)getNetTaskType:(int)arg1;
- (int)getTaskSeq;
- (id)getWxUserName;
- (_Bool)handleMultiTalkBannerNotify:(id)arg1 WxGroupId:(id)arg2;
- (_Bool)handleMultiTalkNotFriendNotify:(id)arg1;
- (_Bool)handleMultiTalkNotify:(id)arg1;
- (_Bool)handleMultiTalkResp:(int)arg1 seq:(int)arg2 data:(id)arg3;
- (id)init;
- (void)initNetworkWatcher;
- (_Bool)isProxyInit;
- (id)makeProtocolHead:(int)arg1 compressMethod:(int)arg2 cryptMethod:(int)arg3 unZipSize:(unsigned long long)arg4 router:(int)arg5 taskId:(int)arg6;
@property(retain, nonatomic) NSMutableArray *netTaskArray; // @synthesize netTaskArray=_netTaskArray;
- (void)notifyNetworkChange;
- (void)notifyUserChanged;
- (void)postRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 buffer:(id)arg4;
@property(nonatomic) __weak id <WXCNetWorkProxyDelegate> proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
- (void)proxySendRequest:(int)arg1 reqData:(id)arg2 cmd:(int)arg3;
@property(nonatomic) int taskSeq; // @synthesize taskSeq=_taskSeq;
- (void)startNetworkWatcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

