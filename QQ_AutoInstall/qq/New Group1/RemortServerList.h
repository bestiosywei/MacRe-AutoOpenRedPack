//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, TryServerSet;

@interface RemortServerList : NSObject
{
    int wHostType;
    int wNetworkType;
    CDStruct_93d23b61 stDefaultHost;
    unsigned short wHostTimeOut;
    TryServerSet *stServerSetFor3G;
    TryServerSet *stServerSetForWifi;
    TryServerSet *stServerSetFor3GHttp;
    TryServerSet *stServerSetForWifiHttp;
    NSMutableDictionary *serverSetForWifiList;
    NSString *testBSSID;
    NSString *serverSetForWifiPath;
    NSString *nowBSSID;
    TryServerSet *nowServerListBin;
    TryServerSet *nowServerListHttp;
}

@property(readonly) int wNetworkType; // @synthesize wNetworkType;
@property int wHostType; // @synthesize wHostType;
- (void)dealloc;
- (BOOL)switchWifi:(id)arg1;
- (void)setHostTimeout:(unsigned short)arg1;
- (BOOL)switchNetworkType;
- (BOOL)setHostType:(int)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3;
- (BOOL)resetTryOrder;
- (BOOL)updateWifiTryServerSet:(id)arg1 inMode:(int)arg2 stIplist:(id)arg3;
- (id)getWifiTryServerSet:(id)arg1 inMode:(int)arg2;
- (BOOL)setNowIp:(id)arg1 andPort:(unsigned short)arg2 andNextIp:(id)arg3 andPort2:(unsigned short)arg4;
- (BOOL)setNextIP:(id)arg1 andPort:(unsigned short)arg2 andNextIp:(id)arg3 andPort2:(unsigned short)arg4 inMode:(int)arg5;
- (BOOL)getNextRemortHost:(id *)arg1 andPort:(unsigned short *)arg2 andTimeOut:(unsigned short *)arg3;
- (BOOL)getRemortHost:(id *)arg1 andPort:(unsigned short *)arg2 andTimeOut:(unsigned short *)arg3;
- (void)initWifiIp:(id)arg1;
- (id)init;

@end
