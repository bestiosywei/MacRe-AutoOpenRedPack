//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BDHUploadUtil : NSObject
{
}

+ (long long)compareSessionWithPayload:(double)arg1 queueCount1:(int)arg2 sendNum1:(int)arg3 rtt2:(double)arg4 queueCount2:(int)arg5 sendNum2:(int)arg6;
+ (int)segWindowCount:(double)arg1;
+ (BOOL)enableAdjustSegWindow;
+ (unsigned long long)getServerTimeIntervalSince1970;
+ (int)ipDetectCnt;
+ (BOOL)ipDetectEnable;
+ (int)hbFinishTimeoutCnt;
+ (int)hbTimeoutCnt;
+ (int)hbAllFileFinishTm;
+ (int)hbDataSendTm;
+ (BOOL)hbEnable;
+ (long long)caclDiff:(long long *)arg1;
+ (BOOL)noRouteToHostAlwaysRetry;
+ (long long)noRouteToHostTimeoutSeconds;
+ (long long)noRouteToHostIPRetryCount;
+ (BOOL)keepConnectionAlive;
+ (long long)keepConnectionSeconds;
+ (double)checkTimeoutSecs:(double)arg1;
+ (long long)handshakeTimeoutSecs;
+ (long long)rtt;
+ (long long)delta:(int)arg1;
+ (long long)originTime;
+ (long long)baseTime;
+ (long long)segMentCocurrentNum;
+ (long long)segMentSizeWithType:(int)arg1;
+ (long long)maxSessionCount;
+ (id)currentSegConfig:(int)arg1;
+ (long long)extendInfoRetryCount;
+ (long long)fileRetryCount;
+ (long long)serverFailedRetryCount;
+ (long long)dataTimeoutRetryCount;
+ (long long)dataMinTimeoutSecs;
+ (long long)dataMaxTimeoutSecs;
+ (long long)connectionSendTimeoutSecs;
+ (long long)connectTimeoutSecs;
+ (BOOL)isValidIp:(id)arg1;
+ (basic_string_075b6133)decodeHexstrToBin:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)data_md5:(id)arg1;
+ (id)file_md5:(id)arg1;

@end

