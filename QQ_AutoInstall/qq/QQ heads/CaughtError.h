//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@class NSString;

@interface CaughtError : NSException
{
    long long _errorType;
    NSException *_exception;
    NSString *_message;
    NSString *_errorName;
    NSString *_errorStack;
    NSString *_stacks;
    NSString *_threads;
}

+ (id)errorWithName:(id)arg1 reason:(id)arg2 callStack:(id)arg3 threads:(id)arg4;
+ (id)errorWithNSException:(id)arg1 message:(id)arg2;
@property(retain, nonatomic) NSString *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) NSString *stacks; // @synthesize stacks=_stacks;
@property(retain, nonatomic) NSString *errorStack; // @synthesize errorStack=_errorStack;
@property(retain, nonatomic) NSString *errorName; // @synthesize errorName=_errorName;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
@property(readonly, nonatomic) long long errorType; // @synthesize errorType=_errorType;
- (id)getErrorStack;
- (BOOL)packetErrorMessage:(id)arg1;
- (BOOL)packetNSException:(id)arg1;
- (BOOL)packetCrashData:(id)arg1;
- (void)uploadCrash;
- (void)throwException;
- (id)initWithNSException:(id)arg1 message:(id)arg2;

@end

