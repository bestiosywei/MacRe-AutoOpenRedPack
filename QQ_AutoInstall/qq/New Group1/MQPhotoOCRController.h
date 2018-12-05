//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQOCRAreaViewEventDelegate.h"
#import "MQPhotoOCREditViewDelegate.h"

@class MQEventWindow, MQOCRAreaView, MQOCRHandleTask, MQOCROrderNumView, MQPhotoOCRListVC, MQPhotoOCRSubEditView, NSImage, NSMutableArray, NSString, NSView;

@interface MQPhotoOCRController : NSObject <MQOCRAreaViewEventDelegate, MQPhotoOCREditViewDelegate>
{
    BOOL _isEdited;
    BOOL _mouseInEditWindow;
    BOOL _mouseInAreaView;
    NSImage *_curImage;
    MQOCRHandleTask *_contentTask;
    long long _OCRWindowType;
    id <MQOCRInteractiveDelegate> _delegate;
    NSView *_OCRContentView;
    MQPhotoOCRListVC *_resultListViewController;
    MQOCRAreaView *_hoveredView;
    double _scale;
    NSMutableArray *_resultItems;
    NSMutableArray *_resultViews;
    NSMutableArray *_QRCodeItems;
    NSMutableArray *_QRCodeViews;
    NSMutableArray *_selectViews;
    MQOCROrderNumView *_orderNumView;
    MQPhotoOCRSubEditView *_subEditController;
    MQEventWindow *_editWindow;
}

@property(retain, nonatomic) MQEventWindow *editWindow; // @synthesize editWindow=_editWindow;
@property(retain, nonatomic) MQPhotoOCRSubEditView *subEditController; // @synthesize subEditController=_subEditController;
@property(retain, nonatomic) MQOCROrderNumView *orderNumView; // @synthesize orderNumView=_orderNumView;
@property(retain, nonatomic) NSMutableArray *selectViews; // @synthesize selectViews=_selectViews;
@property(retain, nonatomic) NSMutableArray *QRCodeViews; // @synthesize QRCodeViews=_QRCodeViews;
@property(retain, nonatomic) NSMutableArray *QRCodeItems; // @synthesize QRCodeItems=_QRCodeItems;
@property(retain, nonatomic) NSMutableArray *resultViews; // @synthesize resultViews=_resultViews;
@property(retain, nonatomic) NSMutableArray *resultItems; // @synthesize resultItems=_resultItems;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL mouseInAreaView; // @synthesize mouseInAreaView=_mouseInAreaView;
@property(nonatomic) BOOL mouseInEditWindow; // @synthesize mouseInEditWindow=_mouseInEditWindow;
@property(nonatomic) BOOL isEdited; // @synthesize isEdited=_isEdited;
@property(readonly, nonatomic) __weak MQOCRAreaView *hoveredView; // @synthesize hoveredView=_hoveredView;
@property(readonly, nonatomic) __weak MQPhotoOCRListVC *resultListViewController; // @synthesize resultListViewController=_resultListViewController;
@property(nonatomic) __weak NSView *OCRContentView; // @synthesize OCRContentView=_OCRContentView;
@property(nonatomic) __weak id <MQOCRInteractiveDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long OCRWindowType; // @synthesize OCRWindowType=_OCRWindowType;
@property(readonly, nonatomic) MQOCRHandleTask *contentTask; // @synthesize contentTask=_contentTask;
@property(retain, nonatomic) NSImage *curImage; // @synthesize curImage=_curImage;
- (void).cxx_destruct;
- (void)hidePanel;
- (void)showPanel;
- (void)OCRResultViewBoundsDidChanged;
- (id)getFileNameInPath:(id)arg1 WithExtension:(id)arg2;
- (void)saveToFile:(id)arg1 MsgData:(id)arg2;
- (void)saveOCRResultImageWithMsgData:(id)arg1;
- (void)setResultListViewController:(id)arg1 showCloseButton:(BOOL)arg2;
- (void)OCRDataDidChaged:(id)arg1;
- (void)cleanAllSelected;
- (void)OCRResultAreaClicked:(id)arg1 event:(id)arg2;
- (void)setOCRResultAreaClicked:(id)arg1 mutableSelected:(BOOL)arg2;
- (void)setOCRResultHoverInTableView:(long long)arg1;
- (void)showEditWindow:(id)arg1;
- (void)showOrderNum:(id)arg1;
- (void)setHoveredView:(id)arg1;
- (void)setOCRResultAreaHovered:(id)arg1;
- (long long)lengthFromAllMsg;
- (id)attributedStringFromSelectMsg;
- (void)cleanSelectedOCRItem;
- (void)onCopyOCRItem;
- (void)restoreEditWindow;
- (void)restoreHoverType;
- (void)cleanOCRData;
- (void)reloadOCRDataInContentView;
- (void)cancelDetecting;
- (void)startOCRDetectingWithImage:(id)arg1;
- (id)parseOCRResultItemsWithBHYouTuOCR:(id)arg1 image:(id)arg2;
- (id)parseOCRResultItemsWithJSONDict:(id)arg1 image:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
