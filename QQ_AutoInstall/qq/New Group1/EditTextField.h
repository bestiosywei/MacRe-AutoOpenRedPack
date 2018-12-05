//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQHover4LableView.h"

@class NSColor;

@interface EditTextField : MQHover4LableView
{
    id <ShouldChangeTextDelegate> _shouldChangeTextDelegate;
    NSColor *_focusRingColor;
}

@property(retain, nonatomic) NSColor *focusRingColor; // @synthesize focusRingColor=_focusRingColor;
@property(nonatomic) __weak id <ShouldChangeTextDelegate> shouldChangeTextDelegate; // @synthesize shouldChangeTextDelegate=_shouldChangeTextDelegate;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)initUI;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
