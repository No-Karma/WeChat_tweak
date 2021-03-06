//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMBizFileMatchNode;

@interface MMDiskBizUsageHandler : NSObject
{
    MMBizFileMatchNode *_appRootMatchNode;
}

+ (struct MMBizMatchInfo)fileMatchedBizType:(id)arg1 inFolder:(id)arg2;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (_Bool)p_isRuleValid:(const struct MMDiskUsageBizRule *)arg1;
+ (int)p_validateStoreTimeType:(const struct MMDiskUsageBizRule *)arg1;
+ (id)ruleDescription:(const struct MMDiskUsageBizRule *)arg1;
- (void).cxx_destruct;
- (_Bool)addPathComponent:(id)arg1 withRule:(const struct MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3;
@property(retain, nonatomic) MMBizFileMatchNode *appRootMatchNode; // @synthesize appRootMatchNode=_appRootMatchNode;
- (id)getRootMatchNode;
- (id)loadPathMatchRules;
- (void)p_makeArrayBizFileNodeOtherUser:(id)arg1;

@end

