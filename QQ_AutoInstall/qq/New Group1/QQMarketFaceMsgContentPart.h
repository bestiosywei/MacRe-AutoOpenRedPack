//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgContentPart.h"

#import "BHBigFaceImage.h"
#import "NSCoding.h"

@class NSString;

@interface QQMarketFaceMsgContentPart : QQBaseMsgContentPart <NSCoding, BHBigFaceImage>
{
    NSString *_faceURI;
    unsigned int _tabID;
    unsigned int _mediaType;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    NSString *_filePath;
    NSString *_faceName;
    NSString *_faceID;
    NSString *_key;
    long long _subType;
}

@property(nonatomic) unsigned int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int tabID; // @synthesize tabID=_tabID;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *faceID; // @synthesize faceID=_faceID;
@property(copy, nonatomic) NSString *faceName; // @synthesize faceName=_faceName;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *faceURI;
@property(copy, nonatomic) NSString *encryptedKey;
@property(readonly, nonatomic) BOOL sendable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictonary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

