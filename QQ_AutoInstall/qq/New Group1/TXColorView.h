//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBezierPath, NSColor, NSImage;

@interface TXColorView : NSView
{
    NSColor *startColor;
    NSColor *endColor;
    NSImage *bgImage;
    NSImage *bgImageOver;
    NSImage *bgImageInactive;
    long long angle;
    BOOL _useTiledBackgroundImage;
    double _topLeftRadius;
    double _topRightRaius;
    double _bottomLeftRadius;
    double _bottomRightRaius;
    NSBezierPath *_clippingPath;
    BOOL _bgImageSizeNotZoom;
    BOOL _drawBorder;
    BOOL _mqUserInteractionEnabled;
    float _borderWidth;
    NSImage *_bgImageOver;
    NSColor *_borderColor;
}

@property(nonatomic) BOOL mqUserInteractionEnabled; // @synthesize mqUserInteractionEnabled=_mqUserInteractionEnabled;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) BOOL drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) BOOL bgImageSizeNotZoom; // @synthesize bgImageSizeNotZoom=_bgImageSizeNotZoom;
@property(retain, nonatomic) NSImage *bgImageOver; // @synthesize bgImageOver=_bgImageOver;
@property BOOL useTiledBackgroundImage; // @synthesize useTiledBackgroundImage=_useTiledBackgroundImage;
@property(retain, nonatomic) NSImage *bgImageInactive; // @synthesize bgImageInactive;
@property long long angle; // @synthesize angle;
@property(retain, nonatomic) NSImage *bgImage; // @synthesize bgImage;
@property(retain, nonatomic) NSColor *endColor; // @synthesize endColor;
@property(retain, nonatomic) NSColor *startColor; // @synthesize startColor;
- (void).cxx_destruct;
- (void)updateCursor;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
@property double bottomRightRadius;
@property double bottomLeftRadius;
@property double topRightRadius; // @synthesize topRightRadius=_topRightRaius;
@property double topLeftRadius; // @synthesize topLeftRadius=_topLeftRadius;
- (id)clippingPath;
- (void)setupClippingPath;
- (void)addBorder;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

