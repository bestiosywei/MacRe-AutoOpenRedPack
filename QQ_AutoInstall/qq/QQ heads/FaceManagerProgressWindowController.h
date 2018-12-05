//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSProgressIndicator, NSString, NSTextField;

@interface FaceManagerProgressWindowController : NSWindowController
{
    NSProgressIndicator *progressIndicator;
    NSTextField *tipInfo;
    NSString *tipInfoFormat;
    BOOL isImport;
}

@property(nonatomic) BOOL isImport; // @synthesize isImport;
@property(retain, nonatomic) NSString *tipInfoFormat; // @synthesize tipInfoFormat;
- (void).cxx_destruct;
- (void)showDividingInfo;
- (void)updateProgressbarWithResult:(int)arg1 allCount:(unsigned long long)arg2 disposeCount:(unsigned long long)arg3 sameCount:(unsigned long long)arg4;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1 flag:(BOOL)arg2;

@end
