//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBBeaconPersistObject.h"

@class NSArray, NSDictionary, NSString;

@interface QBBeaconModuleStrategy : QBBeaconPersistObject
{
    int moduleKey;
    _Bool onOff;
    NSString *uploadUrl;
    NSDictionary *detail;
    NSArray *preventEventCode;
    NSArray *sampleEvent;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *detail; // @synthesize detail;
- (id)initWithWUPMSModel:(id)arg1;
- (_Bool)isEventCanReport:(id)arg1;
@property(nonatomic) int moduleKey; // @synthesize moduleKey;
@property(nonatomic) _Bool onOff; // @synthesize onOff;
@property(retain, nonatomic) NSArray *preventEventCode; // @synthesize preventEventCode;
@property(retain, nonatomic) NSArray *sampleEvent; // @synthesize sampleEvent;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl;

@end

