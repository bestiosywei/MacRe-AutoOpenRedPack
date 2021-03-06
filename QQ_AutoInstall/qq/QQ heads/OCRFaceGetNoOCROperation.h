//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface OCRFaceGetNoOCROperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCancelled;
    int _faceType;
    id _getFaceCompletion;
}

@property(copy) id getFaceCompletion; // @synthesize getFaceCompletion=_getFaceCompletion;
@property int faceType; // @synthesize faceType=_faceType;
- (void).cxx_destruct;
- (void)changeValueForKeys:(id)arg1 withBlock:(id)arg2;
- (void)finishOperation;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isCancelled;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)_onStart;
- (void)dealloc;
- (void)start;

@end

