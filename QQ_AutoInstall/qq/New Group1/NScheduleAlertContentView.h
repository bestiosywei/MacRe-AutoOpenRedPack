//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSTextField, TXHoverButton;

@interface NScheduleAlertContentView : NSView
{
    BOOL _isSecondBtnSelected;
    NSTextField *_titleTextField;
    TXHoverButton *_firstBtn;
    TXHoverButton *_secondBtn;
    NSButton *_firstTextField;
    NSButton *_secondTextField;
}

+ (id)instanceFromNib;
@property(nonatomic) BOOL isSecondBtnSelected; // @synthesize isSecondBtnSelected=_isSecondBtnSelected;
@property(nonatomic) __weak NSButton *secondTextField; // @synthesize secondTextField=_secondTextField;
@property(nonatomic) __weak NSButton *firstTextField; // @synthesize firstTextField=_firstTextField;
@property(nonatomic) __weak TXHoverButton *secondBtn; // @synthesize secondBtn=_secondBtn;
@property(nonatomic) __weak TXHoverButton *firstBtn; // @synthesize firstBtn=_firstBtn;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSecondBtnSelect;
- (void)secondBtnSelected:(id)arg1;
- (void)firstBtnSelected:(id)arg1;
- (void)setTitle:(id)arg1 andOptions:(id)arg2;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)drawRect:(struct CGRect)arg1;

@end

