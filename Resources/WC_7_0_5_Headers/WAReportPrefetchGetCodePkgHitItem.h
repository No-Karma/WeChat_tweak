//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportPrefetchGetCodePkgHitItem : WAReportBaseItem
{
    unsigned int _isFirstHit;
    unsigned int _reportId;
    NSString *_username;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int isFirstHit; // @synthesize isFirstHit=_isFirstHit;
- (void)makeSafeString;
- (int)reportID;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
- (id)reportString;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

