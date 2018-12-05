//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MQSCGrabAreaViewDelegate.h"

@class MQSCControlContainView, MQSCGrabAreaView, NSMutableArray, NSString, NSTrackingArea;

@interface MQSCSelectContentView : NSView <MQSCGrabAreaViewDelegate>
{
    struct CGPoint _clickPoint;
    MQSCGrabAreaView *_grabAreaView;
    NSMutableArray *windowList;
    struct CGRect _windowFrame;
    long long _windowPid;
    BOOL _isGrabFinished;
    struct CGRect _sizeInfoRect;
    MQSCControlContainView *_sizeInfoView;
    NSTrackingArea *_trackingArea;
    BOOL _isHideBorder;
    BOOL _isEnterWindow;
    id <MQSCSelectContentViewDelegate> selectDelegate;
    id <MQSCSelectContentViewDelegate> _selectDelegate;
}

@property(nonatomic) id <MQSCSelectContentViewDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)setSizeInfoFiled:(struct CGRect)arg1;
- (void)hideGlassReadingView;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setSizeInfo:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (struct CGRect)pointArea:(struct CGPoint)arg1 windowPid:(long long *)arg2;
- (void)dealloc;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 withScreen:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
