//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQAVP2PPacketHandler : NSObject
{
}

+ (id)sharedHandler;
- (void)addMessage:(struct SharpVideoMsg *)arg1;
- (const char *)getEmPackageTypeForLog:(int)arg1;
- (void)didReceiveRawData:(id)arg1;
- (void)stopPacketHandling;
- (void)startPacketHandling;

@end
