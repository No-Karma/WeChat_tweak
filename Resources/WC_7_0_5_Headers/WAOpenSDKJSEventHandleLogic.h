//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"
#import "WAOpenSDKJSEventHandlerDelegate.h"

@class NSMutableArray, NSString, WAContactGetter;

@interface WAOpenSDKJSEventHandleLogic : NSObject <WAOpenSDKJSEventHandlerDelegate, PBMessageObserverDelegate>
{
    long long _apiFrom;
    WAContactGetter *_contactGetter;
    NSMutableArray *_jsapiEvents;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(nonatomic) long long apiFrom; // @synthesize apiFrom=_apiFrom;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2;
- (void)endWithResult:(id)arg1 eventHandler:(id)arg2 transitiveData:(id)arg3 context:(id)arg4;
- (Class)getJsapiClass:(id)arg1;
- (void)handleEvent:(id)arg1 argsDic:(id)arg2 eventContext:(id)arg3 jsapiType:(id)arg4 transitiveData:(id)arg5;
- (_Bool)handleOpenSDKJSEventWithUserName:(id)arg1 orAppId:(id)arg2 invokeData:(id)arg3 invokeContext:(id)arg4;
- (id)init;
@property(retain, nonatomic) NSMutableArray *jsapiEvents; // @synthesize jsapiEvents=_jsapiEvents;
- (void)sendRespToOpenApiMgr:(id)arg1;
- (void)updateRuntimeQrcode:(unsigned int)arg1 respData:(id)arg2 invokeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

