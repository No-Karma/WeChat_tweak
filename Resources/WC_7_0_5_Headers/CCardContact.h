//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CContact.h"

@class NSString;

@interface CCardContact : CContact
{
    NSString *_m_nsCardDesc;
    NSString *_m_nsCardDescIcon;
}

+ (id)contactFromShareCardMsgContent:(id)arg1;
- (void).cxx_destruct;
- (void)genContactFromShareCardMsgWrapContent:(id)arg1;
@property(retain, nonatomic) NSString *m_nsCardDesc; // @synthesize m_nsCardDesc=_m_nsCardDesc;
@property(retain, nonatomic) NSString *m_nsCardDescIcon; // @synthesize m_nsCardDescIcon=_m_nsCardDescIcon;

@end

