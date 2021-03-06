//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer, PwdGuardFailedWindowController, PwdGuardWindowController, VerifyCodeController;

@interface MessageAlertController : NSObject
{
    VerifyCodeController *verifyCodeController;
    PwdGuardWindowController *pwdGuardController;
    PwdGuardFailedWindowController *pwdGuardFailedController;
    struct CGPoint m_pwdGuardFrameOrigin;
    NSDate *m_serverDate;
    NSTimer *m_pwdGuardTimer;
    int m_needTimer;
}

+ (id)sharedAlertController;
- (void)alertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)ShowCorruptedFileAlert;
- (void)ShowDeleteFileAlert;
- (void)ShowUnKnownAlert;
- (void)ShowNoSpaceAlert:(long long)arg1;
- (void)showServerTime:(id)arg1;
- (void)loginFailAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (BOOL)isAccountSurviceExpired:(long long)arg1;
- (BOOL)isPwdError:(long long)arg1;
- (BOOL)isShowSolution:(long long)arg1;
- (void)ShowLoginFailSheet:(id)arg1 loginFailType:(long long)arg2 errorCode:(long long)arg3;
- (void)ShowLoginFailSheet:(id)arg1 loginFailType:(long long)arg2;
- (void)showReloginFailSheet:(id)arg1;
- (void)reloginFailAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)getEMBKPicFailed;
- (void)setEMBKPic:(id)arg1;
- (void)showPwdGuardFailedWindow:(id)arg1 errorID:(id)arg2;
- (void)showPwdGuardWindow:(id)arg1 defaultID:(id)arg2;
- (void)showVerifyCodeWindow:(id)arg1 withAccount:(id)arg2;
- (void)serverKickoutAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)showServerKickoutSheet:(id)arg1 withKickType:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

