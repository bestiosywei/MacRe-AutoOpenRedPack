//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString, NewsWebView;

@interface QQNewsWindowController : NSWindowController <NSWindowDelegate>
{
    NewsWebView *webView;
}

- (void).cxx_destruct;
- (void)onWindowDidBecomeMain:(id)arg1;
- (void)onWindowDidResignMain:(id)arg1;
- (void)loadMainFrameURL;
- (void)initWindow;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

