//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (AES)
- (id)doCipherWithIV:(id)arg1 key:(id)arg2 context:(unsigned int)arg3 error:(id *)arg4;
- (id)doCipherDecryptWithIV:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (id)doCipherEncryptWithIV:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (id)AES128Operation:(unsigned int)arg1 CKey:(id)arg2 iv:(id)arg3;
- (id)AES128DecryptedDataWithCKey:(id)arg1;
- (id)AES128Operation:(unsigned int)arg1 key:(id)arg2 iv:(id)arg3;
- (id)AES128DecryptedDataWithKey:(id)arg1 iv:(id)arg2;
- (id)AES128EncryptedDataWithKey:(id)arg1 iv:(id)arg2;
- (id)AES128DecryptedDataWithKey:(id)arg1;
- (id)AES128EncryptedDataWithKey:(id)arg1;
@end

