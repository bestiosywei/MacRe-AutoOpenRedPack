//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSObject<OS_dispatch_source>, NSTimer;

@interface TChatTimerManager : QQBaseSingleton
{
    NSObject<OS_dispatch_source> *_gifRefleshSource;
    NSTimer *_emoticonTimer;
    long long _observerCount;
}

@property(nonatomic) long long observerCount; // @synthesize observerCount=_observerCount;
@property(retain, nonatomic) NSTimer *emoticonTimer; // @synthesize emoticonTimer=_emoticonTimer;
- (void).cxx_destruct;
- (void)updateEmoticonImage;
- (void)decreaseObserver;
- (void)increaseObserver;

@end
