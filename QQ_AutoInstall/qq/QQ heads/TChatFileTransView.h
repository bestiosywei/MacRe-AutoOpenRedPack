//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatFileBaseView.h"

@class MQFileViewModel, NSImage, TChatFileTransControl;

@interface TChatFileTransView : TChatFileBaseView
{
    BOOL _isMouseEnter;
    TChatFileTransControl *viewControl;
    int _transStatus;
    NSImage *_fileIcon;
    MQFileViewModel *_fileViewModel;
}

@property(retain, nonatomic) MQFileViewModel *fileViewModel; // @synthesize fileViewModel=_fileViewModel;
@property(nonatomic) int transStatus; // @synthesize transStatus=_transStatus;
@property(retain) NSImage *fileIcon; // @synthesize fileIcon=_fileIcon;
- (void).cxx_destruct;
- (void)OnSaveImageToCustomiseFacesByMenu:(id)arg1;
- (BOOL)showSaveTo;
- (void)onSaveTo;
- (void)onDownload;
- (void)onOpenFolder;
- (void)onOpenFile;
- (void)onOCRScan;
- (id)getFileName;
- (id)getFilePath;
- (void)onFileCopy;
- (void)update:(id)arg1;
- (id)getViewModel;
- (void)mouseExist:(id)arg1;
- (void)mouseEnter:(id)arg1;
- (id)handleDoubleClick:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)switchFileSendMode;
- (void)drawRect:(struct CGRect)arg1;
- (void)notifyShowDetails;
- (void)notifyClickSwitchToOfflineFileArea;
- (void)notifyClickResendArea;
- (void)notifyDoubleClickArea;
- (void)notifyClickShowInFinderArea;
- (id)progressBg;
- (id)reDownloadIcon;
- (id)downloadIcon;
- (id)switchToOfflineFileIcon;
- (id)resendIcon;
- (id)uploadIcon;
- (id)showVideoPlayIcon;
- (id)showInFinderIcon;
- (id)progressInner;
- (id)progressOuter;
- (id)acceptButton;
- (id)cancelButton;
- (id)pauseButton;
- (id)thumbnailBackgroundShadow;

@end

