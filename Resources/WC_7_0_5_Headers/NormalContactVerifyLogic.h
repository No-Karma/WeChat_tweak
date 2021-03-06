//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface NormalContactVerifyLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int m_uiNeedConfirm;
    unsigned int _m_qrAddScene;
    id <NormalContactVerifyLogicDelegate> _delegate;
    NSString *_m_reportInfo;
}

- (void).cxx_destruct;
- (void)HandleGetContact:(id)arg1;
- (void)HandleVerifyUser:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <NormalContactVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)doubleCheckContactAntispamTickets:(id)arg1 withRequest:(id)arg2;
- (id)init;
@property(nonatomic) unsigned int m_qrAddScene; // @synthesize m_qrAddScene=_m_qrAddScene;
@property(retain, nonatomic) NSString *m_reportInfo; // @synthesize m_reportInfo=_m_reportInfo;
@property(nonatomic) unsigned int m_uiNeedConfirm; // @synthesize m_uiNeedConfirm;
- (_Bool)sendVerifyUserRequest:(id)arg1;
- (_Bool)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3;

@end

