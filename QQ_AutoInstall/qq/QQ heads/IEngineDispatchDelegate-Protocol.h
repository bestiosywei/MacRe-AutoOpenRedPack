//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol IEngineDispatchDelegate <NSObject>
- (void)notifyError:(NSDictionary *)arg1;
- (void)didRecievedMsg:(CDStruct_a00ab4be)arg1;

@optional
- (void)onMsfPacketStateWithNoErr:(NSDictionary *)arg1;
@end
