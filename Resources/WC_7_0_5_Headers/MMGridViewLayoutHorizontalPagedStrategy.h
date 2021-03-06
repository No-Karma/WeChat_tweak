//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMGridViewLayoutHorizontalStrategy.h"

@interface MMGridViewLayoutHorizontalPagedStrategy : MMGridViewLayoutHorizontalStrategy
{
    long long _numberOfItemsPerRow;
    long long _numberOfItemsPerPage;
    long long _numberOfPages;
}

+ (_Bool)requiresEnablingPaging;
- (long long)columnForItemAtPosition:(long long)arg1;
- (long long)itemPositionFromLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) long long numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
@property(readonly, nonatomic) long long numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
@property(readonly, nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (struct CGPoint)originForItemAtColumn:(long long)arg1 row:(long long)arg2 page:(long long)arg3;
- (struct CGPoint)originForItemAtPosition:(long long)arg1;
- (long long)pageForItemAtIndex:(long long)arg1;
- (long long)positionForItemAtColumn:(long long)arg1 row:(long long)arg2 page:(long long)arg3;
- (struct _NSRange)rangeOfPositionsInBoundsFromOffset:(struct CGPoint)arg1;
- (void)rebaseWithItemCount:(long long)arg1 insideOfBounds:(struct CGRect)arg2;
- (long long)rowForItemAtPosition:(long long)arg1;

@end

