//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ThreadSafeMutableDictionary;

@interface MACQQAppSetting : NSObject
{
    ThreadSafeMutableDictionary *_appSetting;
}

+ (id)GetInstance;
@property(retain, nonatomic) ThreadSafeMutableDictionary *appSetting; // @synthesize appSetting=_appSetting;
- (void).cxx_destruct;
- (void)setOnlineStatusPush:(BOOL)arg1;
- (BOOL)getOnlineStatusPush;
- (void)delaySaveAppSetting;
- (void)saveAppSetting;
- (void)loadAppSetting;
- (void)dealloc;
- (id)init;

@end

