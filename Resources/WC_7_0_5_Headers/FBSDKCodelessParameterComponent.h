//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBSDKCodelessParameterComponent : NSObject
{
    NSString *_name;
    NSString *_value;
    NSArray *_path;
    NSString *_pathType;
}

- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

@end

