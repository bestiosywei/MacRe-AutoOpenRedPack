//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "QQAccountEventObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BHWalletMsgManager : QQBaseSingleton <QQAccountEventObserver>
{
    NSMutableDictionary *_pwdRedPackDict;
    NSObject<OS_dispatch_queue> *_redpackQueue;
    NSMutableDictionary *_walletStateDict;
}

+ (id)WalletStateInfoPath;
+ (id)PRPInfoPath;
@property(retain, nonatomic) NSMutableDictionary *walletStateDict; // @synthesize walletStateDict=_walletStateDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *redpackQueue; // @synthesize redpackQueue=_redpackQueue;
@property(retain, nonatomic) NSMutableDictionary *pwdRedPackDict; // @synthesize pwdRedPackDict=_pwdRedPackDict;
- (void).cxx_destruct;
- (void)writeWalletStateDict;
- (void)loadWalletStateDict;
- (void)setWalletStateWithBillNo:(id)arg1 state:(int)arg2 createTime:(int)arg3;
- (int)WalletStateWithBillNo:(id)arg1;
- (id)createModelWithMsgModel:(id)arg1;
- (id)createModelWithPB:(const struct RedBagInfo *)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (void)setClusterId:(long long)arg1 sessType:(int)arg2 redPackTime:(long long)arg3;
- (void)setClusterRedPackTime:(id)arg1 clusterId:(long long)arg2 sessType:(int)arg3;
- (id)getClusterRedPackTime:(long long)arg1 sessType:(int)arg2;
- (BOOL)addPRP:(long long)arg1 sessType:(int)arg2 prp:(id)arg3;
- (id)redPrpKey:(long long)arg1 sessType:(int)arg2;
- (id)getPasswordWallet:(long long)arg1 sessType:(int)arg2 msgContent:(id)arg3;
- (BOOL)hasPasswordWallet:(long long)arg1 sessType:(int)arg2;
- (void)loadPRPData;
- (void)writePRPData;
- (void)requestPasswordWallet:(long long)arg1 sessType:(int)arg2 redPackTime:(long long)arg3 completion:(id)arg4;
- (void)onDidChangeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
