//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FAUtils : NSObject
{
}

+ (BOOL)isWritableFileAtPath:(id)arg1;
+ (BOOL)hasProxyWithTencent;
+ (id)getFileUrlWithSecurityBookmark:(id)arg1;
+ (BOOL)addSecurityBookmark:(id)arg1;
+ (id)customAuthenticationChallenge:(struct __SecTrust *)arg1 domain:(id)arg2;
+ (int)getVideoFileType:(id)arg1;
+ (void)FALog:(id)arg1 ModuleName:(id)arg2 isError:(BOOL)arg3 extraInfo:(id)arg4;
+ (BOOL)moveFile:(id)arg1 Des:(id)arg2 errMsg:(id *)arg3;
+ (int)getFARelationType:(int)arg1;
+ (id)getOriginUrl:(id)arg1;
+ (id)getMultiMsgForDatalineFromOldDB:(id)arg1;
+ (id)getMultiMsgForDataline:(id)arg1;
+ (id)getFAModelByUuid:(id)arg1;
+ (id)getFAModelByJobIDFromCache:(unsigned long long)arg1;
+ (id)createNewFAModelWhenNotFoundByMessageModel:(id)arg1;
+ (id)getFAModelFromMessageModel:(id)arg1;
+ (id)getFAModelByUuid4Ipad:(id)arg1;
+ (id)_getFAModelFromQQMessageModelByMsgID:(id)arg1;
+ (id)getFAModelFromQQMessageModelByUniSeq:(id)arg1;
+ (void)_setJobIDToMessageModel:(id)arg1 JobID:(unsigned long long)arg2;
+ (void)setJobIDToQQMessageModel:(id)arg1 JobID:(unsigned long long)arg2;
+ (id)_parseUUIDFromMessageModel:(id)arg1;
+ (unsigned long long)_parseJobIDFromMessageModel:(id)arg1;
+ (unsigned long long)parseJobIDFromQQMessageModelContent:(id)arg1;
+ (unsigned long long)getJobIDFromQQMessageModel:(id)arg1;
+ (id)calculateStringMD5:(id)arg1;
+ (id)calculateFileSHA3:(id)arg1;
+ (id)calculateFileSHA:(id)arg1;
+ (id)calculateFileMD5:(id)arg1;
+ (id)stringToBin:(id)arg1;
+ (id)strToBin:(const char *)arg1 length:(int)arg2;
+ (id)hexToString:(id)arg1;
+ (id)hexToString:(const char *)arg1 Length:(int)arg2;
+ (BOOL)isFileTransferNetworkError:(int)arg1;
+ (BOOL)isUseProxyHttpStrategy;
+ (BOOL)isNetworkReady;
+ (unsigned long long)currentServerTime;
+ (id)getFileTmpDirectory;
+ (id)getFileOriginalSavePath:(id)arg1;
+ (void)_checkDownloadDictionaryIsSymbolicLink:(id)arg1;
+ (void)reSetFileSaveDirectory;
+ (id)getFileSaveDirectory;
+ (void)setFileSaveDirectory:(id)arg1;
+ (id)getFileTypeName:(id)arg1;
+ (unsigned long long)getFreeDiskSpaceInBytes;
+ (BOOL)isFileExistAtFileSaveDirectory:(id)arg1;
+ (id)getFileUuidFromQQMessageModel:(id)arg1;
+ (id)getAvailableFileSavePath:(id)arg1;
+ (unsigned long long)generateUniMsgSeq:(unsigned int)arg1 msgTime:(unsigned int)arg2 msgRandom:(unsigned int)arg3 msgType:(int)arg4;
+ (unsigned long long)generateUniMsgSeqWithMsgModel:(id)arg1;
+ (unsigned long long)generateRandomUINT64;
+ (unsigned long long)generateJobID;
+ (id)generateGUID;
+ (id)creatMessageModel:(id)arg1 toTraget:(id)arg2;

@end

