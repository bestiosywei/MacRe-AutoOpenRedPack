//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface BHYoutuOCRManager : QQBaseSingleton
{
}

- (void)_textOCRWithPath:(id)arg1 inBackgroud:(BOOL)arg2 timeout:(unsigned long long)arg3 completion:(id)arg4;
- (void)textOCRInBackgroudWithPath:(id)arg1 completion:(id)arg2;
- (void)textOCRWithPath:(id)arg1 timeout:(unsigned long long)arg2 completion:(id)arg3;

@end

