//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol IContactLabelMgrExt <NSObject>

@optional
- (void)onAddContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllTagNameUpdate;
- (void)onContactTagNameUpdate:(NSDictionary *)arg1;
- (void)onDeleteContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(NSArray *)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
@end

