//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RSAPublicKeyWrapper : NSObject
{
}

+ (id)_filePathWithDirName:(id)arg1 andFileName:(id)arg2;
- (id)__encrypt:(id)arg1 encryptString:(id)arg2;
- (BOOL)writePublickeyToFile:(id)arg1 pubKey:(id)arg2;
- (id)encryptWithDefaultPubKey:(id)arg1;
- (id)encryptWithPubKey:(id)arg1 encryptString:(id)arg2;
- (void)dealloc;

@end

