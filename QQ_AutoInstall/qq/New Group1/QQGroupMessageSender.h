//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

@interface QQGroupMessageSender : QQPbMsgSenderBase
{
}

+ (id)getInstance;
- (void)DefaultGenC2CTypeMsgRemoveDupMark:(struct _C2C_DUPLICATE_RELATEMARK *)arg1 ToUin:(unsigned long long)arg2;
- (void)SetC2CTypeRelatedInfoToPbSendMsgReq:(struct PbSendMsgReq *)arg1 ToUin:(unsigned long long)arg2 msgSeq:(unsigned int)arg3 msgRandom:(unsigned int)arg4;
- (int)_sendPbMsgToUin:(unsigned long long)arg1 MsgBody:(MsgBody_1bee2359 *)arg2 RoutingHead:(struct RoutingHead *)arg3 contentHead:(struct ContentHead *)arg4 SendingModel:(id)arg5 msgSeq:(unsigned int)arg6 msgRandom:(unsigned int)arg7 messageModel:(id)arg8;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (long long)getSendUin:(id)arg1;

@end
