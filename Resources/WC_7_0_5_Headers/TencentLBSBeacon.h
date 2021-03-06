//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSUUID;

@interface TencentLBSBeacon : NSObject
{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    long long _proximity;
    double _accuracy;
    long long _rssi;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(copy, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

