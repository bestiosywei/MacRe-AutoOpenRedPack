//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWPAMsgSender.h"

@class NSString;

@interface QQCRMWPAMsgSender : QQWPAMsgSender
{
    NSString *_sigT;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *sigT; // @synthesize sigT=_sigT;
- (void).cxx_destruct;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (void)setBusinessWPATmpSigT:(struct BusinessWPATmp *)arg1 uin:(unsigned long long)arg2;
- (struct BusinessWPATmp *)GenPassiveReplyCRMWPATmpToUin:(unsigned long long)arg1 SeviceType:(unsigned int)arg2 Sig:(id)arg3;
- (struct BusinessWPATmp *)GenInitiativeSendCRMWPATmpToUin:(unsigned long long)arg1;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6 MsgType:(int)arg7 BodyType:(int)arg8;

@end

