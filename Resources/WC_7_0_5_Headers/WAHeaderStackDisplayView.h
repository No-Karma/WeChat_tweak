//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, UIImage;

@interface WAHeaderStackDisplayView : MMUIView
{
    double _coverGap;
    double _headerSize;
    UIImage *_defaultImage;
    NSMutableArray *_headerViews;
}

- (void).cxx_destruct;
@property(nonatomic) double coverGap; // @synthesize coverGap=_coverGap;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(_Bool)arg2;
- (void)fitHeaderViewCount:(unsigned long long)arg1;
- (double)getHeight;
- (double)getWidth;
@property(nonatomic) double headerSize; // @synthesize headerSize=_headerSize;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
- (id)init;
- (id)initWithHeaderSize:(double)arg1;
- (void)orderHeaderViews;
- (void)resetHeaderViewsPosition;

@end

