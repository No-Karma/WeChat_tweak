//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface WCPayPaidOrderShowInfoView : UIView
{
    NSArray *_m_showArray;
    id <WCPayPaidOrderShowInfoViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <WCPayPaidOrderShowInfoViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *m_showArray; // @synthesize m_showArray=_m_showArray;
- (void)onSingleTap:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateWithShowInfo:(id)arg1;

@end

