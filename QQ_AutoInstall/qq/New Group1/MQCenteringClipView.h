//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

@interface MQCenteringClipView : NSClipView
{
    double _lastMouseDown;
    struct CGPoint _lastMouseDownPoint;
    double currentSum;
    BOOL canGoLeft;
    BOOL canGoRight;
    BOOL isHandlingEvent;
    BOOL _haveAdditionalClip;
    struct CGRect _additionalClip;
    float scrollDeltaX;
    float scrollDeltaY;
    BOOL _centersDocumentView;
    id <MQPhotoEventDelegate> _delegate;
}

@property __weak id <MQPhotoEventDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL centersDocumentView; // @synthesize centersDocumentView=_centersDocumentView;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)mouseDoubleClick:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)constrainBoundsRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

