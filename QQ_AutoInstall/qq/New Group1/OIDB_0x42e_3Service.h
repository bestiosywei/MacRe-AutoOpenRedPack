//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSMutableDictionary;

@interface OIDB_0x42e_3Service : QQBaseSingleton
{
    NSMutableDictionary *_msgTimeLineCache;
}

@property(readonly, nonatomic) NSMutableDictionary *msgTimeLineCache; // @synthesize msgTimeLineCache=_msgTimeLineCache;
- (void).cxx_destruct;
- (int)getMonthDayNum:(int)arg1 month:(int)arg2;
- (BOOL)isVaildRsp:(struct Oidb_0x42e_3_Rsp *)arg1;
- (const char *)modelStrWith:(long long)arg1;
- (id)handleRoamDateResponse:(struct Oidb_0x42e_3_Rsp *)arg1;
- (id)decodeToMsgDateList:(const basic_string_075b6133 *)arg1;
- (void)requesstTimeLineWithFuin:(unsigned int)arg1 completion:(id)arg2;
- (void)getTimeLineWithFuin:(unsigned int)arg1 completion:(id)arg2;
- (id)init;

@end

