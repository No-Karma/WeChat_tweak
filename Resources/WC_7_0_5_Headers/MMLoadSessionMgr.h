//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSString;

@interface MMLoadSessionMgr : MMService <MMService>
{
    NSMutableArray *_arrSessionInfo;
    NSMutableArray *_arrLocalizeSessionInfo;
    unsigned long long _startLoadDataTime;
    unsigned int _loadDataCostTime;
    unsigned long long _totalSessionCount;
    NSMutableArray *_arrSessionItems;
    NSMutableArray *_arrDefaultSessionItems;
    _Bool m_loadingData;
    _Bool m_loadDataEnd;
    _Bool m_reloadData;
    NSMutableArray *_arrFileredSessionItems;
    _Bool m_reloadFilteredDataEnd;
    unsigned int m_msgOldestTime;
    unsigned int m_msgNewestTime;
    _Bool _sortSessionBySize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getAllSessionCount;
- (id)getAllSessionItems;
- (void)getBrandSessionHolderDetail:(id)arg1;
- (void)getDetailInfoForSessionItem:(id)arg1;
- (unsigned long long)getLoadedSessionItemsCount;
- (id)getLoadedSesssionItemWithIndex:(unsigned long long)arg1;
- (id)getLoadedSesssionItems;
- (unsigned int)getMsgNewestTime;
- (unsigned int)getMsgOldestTime;
- (id)getSessionName:(id)arg1;
- (unsigned long long)getTotalSessionSize;
- (id)init;
- (_Bool)isDataLoadEnd;
- (_Bool)isLocalizedContactThatCanMigrate:(id)arg1 WithSessionInfo:(id)arg2;
- (void)loadSessionBeforeLoadData;
- (void)onLoadData;
- (unsigned int)parseMesLocalIdFromPath:(id)arg1;
- (void)reloadDataWithCreateTime:(unsigned int)arg1 endTime:(unsigned int)arg2;
@property(nonatomic) _Bool sortSessionBySize; // @synthesize sortSessionBySize=_sortSessionBySize;
- (void)startLoadData;
- (void)stopLoadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
