//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MQAvatarImageView, NSButton, NSImageView, NSTextField;

@interface FSRelationCellView : NSTableCellView
{
    BOOL _isSelected;
    MQAvatarImageView *_avtarImgView;
    NSTextField *_nameTextField;
    NSImageView *_selectIcon;
    NSButton *_deleteBtn;
}

@property BOOL isSelected; // @synthesize isSelected=_isSelected;
@property __weak NSButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property __weak NSImageView *selectIcon; // @synthesize selectIcon=_selectIcon;
@property __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property __weak MQAvatarImageView *avtarImgView; // @synthesize avtarImgView=_avtarImgView;
- (void).cxx_destruct;
- (void)updateSelectedItem:(BOOL)arg1;
- (void)resetItem;
- (void)setupContactItem:(id)arg1;
- (BOOL)acceptsFirstResponder;

@end

