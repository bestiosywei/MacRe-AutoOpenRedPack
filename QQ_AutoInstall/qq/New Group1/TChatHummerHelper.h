//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSData;

@interface TChatHummerHelper : QQBaseSingleton
{
    BOOL _HummerInited;
    NSData *_key;
}

@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) BOOL HummerInited; // @synthesize HummerInited=_HummerInited;
- (void).cxx_destruct;
- (void)initHistoryHelper:(id)arg1 completion:(id)arg2;
- (BOOL)hummerHasData:(id)arg1;

@end

