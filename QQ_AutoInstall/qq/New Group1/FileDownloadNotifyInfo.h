//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NotifyBase.h"

@class NSData;

@interface FileDownloadNotifyInfo : NotifyBase
{
    unsigned long long _senderUin;
    unsigned long long _recverUin;
    NSData *_uuid;
}

@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long recverUin; // @synthesize recverUin=_recverUin;
@property(nonatomic) unsigned long long senderUin; // @synthesize senderUin=_senderUin;
- (void).cxx_destruct;

@end

