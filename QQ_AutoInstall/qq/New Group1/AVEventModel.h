//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface AVEventModel : NSObject
{
    int _eventId;
    int _info;
    unsigned long long _friendUin;
    struct extraInfo *_pStruct;
    NSData *_dataBuf;
    const char *_pAVDataBuf;
}

@property(nonatomic) const char *pAVDataBuf; // @synthesize pAVDataBuf=_pAVDataBuf;
@property(retain, nonatomic) NSData *dataBuf; // @synthesize dataBuf=_dataBuf;
@property(nonatomic) struct extraInfo *pStruct; // @synthesize pStruct=_pStruct;
@property(nonatomic) unsigned long long friendUin; // @synthesize friendUin=_friendUin;
@property(nonatomic) int info; // @synthesize info=_info;
@property(nonatomic) int eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)init;

@end
