//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSSlider, NSTextField;

@interface CVSlider : NSView
{
    NSSlider *slider;
    NSTextField *name;
    int *value;
    void *userData;
    CDUnknownFunctionPointerType callback;
    CDUnknownFunctionPointerType callback2;
}

@property CDUnknownFunctionPointerType callback2; // @synthesize callback2;
@property CDUnknownFunctionPointerType callback; // @synthesize callback;
@property void *userData; // @synthesize userData;
@property int *value; // @synthesize value;
@property(retain) NSTextField *name; // @synthesize name;
@property(retain) NSSlider *slider; // @synthesize slider;
- (void)sliderChanged:(id)arg1;
- (id)init;

@end

