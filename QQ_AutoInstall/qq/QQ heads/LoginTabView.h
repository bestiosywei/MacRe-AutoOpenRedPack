//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CAAnimationDelegate.h"
#import "HeadImagesViewDelegate.h"
#import "NSAnimationDelegate.h"
#import "NSTextFieldDelegate.h"
#import "QQLoginResultObserver.h"

@class ClientLockManager, HeadImagesView, LoginAnimationView, LoginSettingView, NSButton, NSDictionary, NSImage, NSImageView, NSMutableArray, NSString, NSTextField, NSWindow, TXAccountTextField, TXBackgroundImageView, TXHoverButton, TXHoverImageView, TXMulStatusHoverButton, TXSecureTextField;

@interface LoginTabView : NSView <NSTextFieldDelegate, HeadImagesViewDelegate, NSAnimationDelegate, QQLoginResultObserver, CAAnimationDelegate>
{
    NSMutableArray *genQQNumber;
    NSMutableArray *genQQPasswd;
    int m_bIsLogining;
    long long m_bufSavedPwdHash;
    NSString *m_nstrSavedPwd;
    NSString *m_strPreAccount;
    NSImage *backgroundImage;
    TXBackgroundImageView *backgroundView;
    NSImageView *imageBackgroundForClientLock;
    int m_delAccountWhenInput;
    NSView *inputView;
    NSView *upsideView;
    TXMulStatusHoverButton *statusBtn;
    LoginSettingView *settingView;
    TXHoverButton *QRCodeBtn;
    TXMulStatusHoverButton *forgetPasswordBtn;
    TXMulStatusHoverButton *needsQQIDBtn;
    TXMulStatusHoverButton *rememberPassWordBtn;
    TXMulStatusHoverButton *autoLoginBtn;
    TXMulStatusHoverButton *rememberPassWordField;
    TXMulStatusHoverButton *autoLoginField;
    TXHoverButton *loginBtn;
    TXMulStatusHoverButton *cancelBtn;
    TXAccountTextField *AccountFiled;
    TXSecureTextField *PasswordFiled;
    NSButton *bigHeadImageBtn;
    TXHoverImageView *bigHeadImageMaskView;
    NSImageView *bigHeadImageView;
    NSView *headImagesSliderView;
    HeadImagesView *headImagesView;
    LoginAnimationView *loginAnimationView;
    TXHoverButton *closeBtn;
    TXHoverButton *closeBtnForClientLock;
    NSString *tempAccount;
    NSWindow *settingWindow;
    BOOL isHeadImagesSliderViewAnimating;
    NSImage *curActivePWDBackGround;
    NSTextField *nickNameField;
    NSDictionary *nickNameAtrr;
    long long headClickCount;
    BOOL bAllowsReturnKeyLoginOrCancel;
    BOOL bLoadAccountInfoIfNecess;
    int bIsAutoLogin;
    BOOL bAccountDeleteKey;
    NSString *strNickName;
    TXHoverButton *showSettingBtn;
    NSView *loginView;
    BOOL bIsLoginError;
    BOOL bIsPreviousAutoLogin;
    BOOL bIsMatchAccount;
    BOOL bIsNeedSetting;
    BOOL bIsRealLogin;
    BOOL bIsSettingShow;
    ClientLockManager *clientLockMgr;
    unsigned long long selectedAccontIndex;
    BOOL isShowAnimate;
    unsigned long long _clickLoginTimeInterval;
}

@property(nonatomic) unsigned long long clickLoginTimeInterval; // @synthesize clickLoginTimeInterval=_clickLoginTimeInterval;
@property(retain) TXSecureTextField *PasswordFiled; // @synthesize PasswordFiled;
@property(retain) NSString *tempAccount; // @synthesize tempAccount;
- (void)setLoginButtonEnableImage:(BOOL)arg1;
- (void)loginWindowWillClose;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)isHeadImagesViewBeenShow;
- (void)CloseWindow:(id)arg1;
- (void)HideSettingPanel:(id)arg1;
- (void)ShowSettingPanel:(id)arg1;
- (void)settingClick:(id)arg1;
- (void)headImagesView:(id)arg1 didClickBtnAtIndex:(unsigned long long)arg2 withAccount:(id)arg3;
- (void)emptyAccountSetting;
- (void)headImagesView:(id)arg1 mouseExitAtIndex:(unsigned long long)arg2;
- (void)headImagesView:(id)arg1 mouseOverAtIndex:(unsigned long long)arg2 withAccount:(id)arg3;
- (void)headImagesView:(id)arg1 didDeleteAccountAtIndex:(unsigned long long)arg2 withAccount:(id)arg3;
- (void)seleteSecure;
- (void)setActiveStatus:(BOOL)arg1;
- (void)setAllowsReturnKeyLoginOrCancel;
- (void)windowKeyDown:(id)arg1;
- (void)windowMouseDown:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startSwitchAccountAnimate:(BOOL)arg1;
- (void)closeHeadImages;
- (void)showHeadImages:(id)arg1;
- (id)getHeadImagesArray;
- (void)setHeadImage;
- (id)roundCorners:(id)arg1;
- (void)appearViewAnimation:(id)arg1 withDuration:(double)arg2;
- (void)disappearViewAnimation:(id)arg1 withDuration:(double)arg2;
- (void)moveViewAnimation:(id)arg1 atStartFrame:(struct CGRect)arg2 toEndFrame:(struct CGRect)arg3 withDuration:(double)arg4;
- (void)ForgetPassword:(id)arg1;
- (void)GetAQQID:(id)arg1;
- (void)AutoLoginSetting:(id)arg1;
- (void)RememberPassWord:(id)arg1;
- (void)SinginAsInvisible:(id)arg1;
- (void)showCannotLoginWithOutSem:(id)arg1;
- (id)QQID;
- (id)loginAccountFiled;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)OnClickedQRCodeLogin:(id)arg1;
- (void)convertMsg20;
- (void)OnLoginOK:(id)arg1;
- (void)OnQQPasswordChange:(id)arg1;
- (void)ReloadAccountInfo;
- (void)OnQQIdChange:(id)arg1;
- (BOOL)isAlreadyLogin:(id)arg1;
- (void)showPwdGuardFailedView:(id)arg1 withPGItemID:(unsigned char)arg2;
- (void)showPwdGuardView:(id)arg1 withPGItemId:(unsigned char)arg2 isNotKnownDevice:(BOOL)arg3;
- (void)OnSignIn:(id)arg1;
- (void)onRealLogin;
- (void)restartNewApp;
- (void)cmdNOnDoCancel;
- (void)cancelLogin;
- (void)CancelLogin:(id)arg1;
- (void)EnableLoginButton:(int)arg1;
- (void)cancelVerifyCode;
- (void)notifyShowSMSCodeWithAccount:(id)arg1 phoneInfo:(id)arg2;
- (void)notifyShowVerifyCodeWithAccount:(id)arg1 verifyCode:(id)arg2 tips:(id)arg3;
- (void)notifyLoginWithAccount:(id)arg1 resultCode:(long long)arg2 userInfo:(id)arg3;
- (void)RemoveAccountsFromDefaultFile:(id)arg1;
- (void)SaveAccountsToDefaultFile;
- (void)ReadAccountsFromDefaultFile;
- (BOOL)canAutoLogin;
- (void)awakeFromNib;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_initVariables;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

