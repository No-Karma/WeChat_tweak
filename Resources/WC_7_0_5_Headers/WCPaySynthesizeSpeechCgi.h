//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary;

@interface WCPaySynthesizeSpeechCgi : NSObject <PBMessageObserverDelegate>
{
    id <WCPaySynthesizeSpeechCgiDelegate> _m_delegate;
    NSMutableDictionary *_m_dictSpeechMsg;
    NSMutableDictionary *_m_dictCGIRequestBeginTime;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WCPaySynthesizeSpeechCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dictCGIRequestBeginTime; // @synthesize m_dictCGIRequestBeginTime=_m_dictCGIRequestBeginTime;
@property(retain, nonatomic) NSMutableDictionary *m_dictSpeechMsg; // @synthesize m_dictSpeechMsg=_m_dictSpeechMsg;
- (void)startRequestWithSynthesizeSpeechMsg:(id)arg1;

@end

