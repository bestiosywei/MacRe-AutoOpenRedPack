//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CompatibleBaseMsgTableOperation : NSObject
{
}

+ (struct _NSRange)findFirstMarkTag:(id)arg1 markStr:(id)arg2 range:(struct _NSRange)arg3;
- (id)convertMarkeFaceStringToJSONString:(id)arg1;
- (id)convertFileStringToJSONString:(id)arg1;
- (id)iPadImagePathWith:(id)arg1 imageType:(int)arg2;
- (id)convertVideoStringToJSONString:(id)arg1 picUrlObj:(id)arg2;
- (id)convertImageStringToJSONString:(id)arg1 picUrlObj:(id)arg2;
- (id)convertTextToJSONString:(id)arg1;
- (BOOL)isFaceString:(id)arg1;
- (BOOL)isImageString:(id)arg1;
- (id)spliteContentWithImgAndFace:(id)arg1;
- (id)spliteContentWithImg:(id)arg1;
- (id)faModelWithFMResult:(id)arg1;
- (id)getAllTBFileRecordInDb:(id)arg1;
- (id)messageWithMsgIds:(id)arg1 tableName:(id)arg2 inDb:(id)arg3;
- (id)querySQLWithTableName:(id)arg1 condition:(id)arg2;
- (long long)checkIdentifyWithUin:(long long)arg1 sessType:(int)arg2 identityUin:(unsigned long long)arg3 inDb:(id)arg4;
- (id)tableNameWithMessageModel:(id)arg1;
- (BOOL)isHasTable:(id)arg1 inDb:(id)arg2;
- (id)tableNameWithUin:(long long)arg1 sessType:(int)arg2 identityUin:(long long)arg3;

@end

