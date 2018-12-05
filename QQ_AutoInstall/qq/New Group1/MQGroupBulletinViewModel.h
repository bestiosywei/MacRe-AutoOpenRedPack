//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQWebViewWindow, NSString;

@interface MQGroupBulletinViewModel : NSObject
{
    id <MQGroupBulletinDelegate> _delegate;
    NSString *_groupCode;
    MQWebViewWindow *_webWindow;
}

+ (id)attachmentByImageNamed:(id)arg1;
+ (void)setupGroupBulletinBtnStyle:(id)arg1;
+ (id)getGroupBulletinAttStr:(id)arg1;
- (void).cxx_destruct;
- (void)showWebGroupBulletin;
- (void)refreshGroupBulletin;
- (id)getLastRichMemo:(id)arg1;
- (void)handlerBulletinChangeNotify:(id)arg1;
- (id)initGroupBulletin:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end
