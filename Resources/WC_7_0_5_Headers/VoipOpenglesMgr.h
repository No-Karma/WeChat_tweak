//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSString;

@interface VoipOpenglesMgr : MMService <MMService>
{
    NSMutableArray *m_openglesContextArray;
}

- (void).cxx_destruct;
- (void)cleanContexts;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_openglesContextArray; // @synthesize m_openglesContextArray;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)removeContextThatMarkDeleted;
- (id)requestContext;
- (void)whenDidActive;
- (void)whenGoingToResign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

