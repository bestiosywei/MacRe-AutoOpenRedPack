//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, RqdThreadInfo;

@interface RqdStackCollector : NSObject
{
    NSString *procName;
    BOOL needSymbol;
    NSMutableArray *allThreadInfos;
    RqdThreadInfo *crashThreadInfo;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL needSymbol; // @synthesize needSymbol;
@property(retain, nonatomic) NSString *procName; // @synthesize procName;
- (id)createAddrInfo:(id)arg1 index:(int)arg2;
- (id)createAddrInfos:(id)arg1;
- (BOOL)needCheckFirstLineOcMsg;
- (void)collectAllThreadsWithCrashThread:(int)arg1;
- (void)collectThreads:(struct __darwin_mcontext64 *)arg1 crashThread:(int)arg2 resumedThreads:(unsigned int *)arg3 resumedThreadCount:(int)arg4;
- (id)init;

@end
