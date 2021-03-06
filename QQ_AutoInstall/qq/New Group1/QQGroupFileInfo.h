//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQGroupFileInfo : NSObject
{
    unsigned int _downloadCount;
    NSString *_fileId;
    NSString *_fileName;
    unsigned long long _fileSize;
    unsigned long long _groupCode;
    long long _businessType;
    NSString *_folderId;
    long long _uploadTime;
    long long _modifyTime;
    long long _expireTime;
    unsigned long long _uploaderUin;
    NSString *_uploaderName;
    NSString *_directoryPath;
    NSString *_wFid;
    NSString *_pDirKey;
    NSString *_wSha;
    NSString *_wMd5;
    long long _groupId;
    long long _rootGroupId;
}

@property(nonatomic) long long rootGroupId; // @synthesize rootGroupId=_rootGroupId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *wMd5; // @synthesize wMd5=_wMd5;
@property(retain, nonatomic) NSString *wSha; // @synthesize wSha=_wSha;
@property(retain, nonatomic) NSString *pDirKey; // @synthesize pDirKey=_pDirKey;
@property(retain, nonatomic) NSString *wFid; // @synthesize wFid=_wFid;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSString *uploaderName; // @synthesize uploaderName=_uploaderName;
@property(nonatomic) unsigned long long uploaderUin; // @synthesize uploaderUin=_uploaderUin;
@property(nonatomic) unsigned int downloadCount; // @synthesize downloadCount=_downloadCount;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) long long uploadTime; // @synthesize uploadTime=_uploadTime;
@property(retain, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *extraInfo;

@end

