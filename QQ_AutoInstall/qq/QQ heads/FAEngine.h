//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface FAEngine : QQBaseSingleton
{
}

+ (id)getAttachFilePath:(id)arg1 workFlowID:(id)arg2;
- (id)getFAModelWithMessageModel:(id)arg1;
- (BOOL)cancel:(id)arg1;
- (void)downloadThumbnail:(id)arg1 compeltion:(id)arg2;
- (id)forwardFile:(id)arg1 toTarget:(id)arg2 completion:(id)arg3;
- (void)resumeDownloadFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)downloadFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (void)resumeSendFile:(id)arg1 completion:(id)arg2 progress:(id)arg3;
- (id)sendLocalFile:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 toTraget:(id)arg4 completion:(id)arg5 progress:(id)arg6;
- (void)downdloadAttchFileByUuid:(id)arg1 fileName:(id)arg2 workFlowID:(id)arg3 fromUin:(id)arg4 completion:(id)arg5;
- (void)uploadAttachFiles:(id)arg1 completion:(id)arg2;

@end
