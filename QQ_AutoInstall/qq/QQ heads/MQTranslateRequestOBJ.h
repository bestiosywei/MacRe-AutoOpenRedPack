//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQSessionID, NSArray, NSAttributedString, TChatBaseViewModel;

@interface MQTranslateRequestOBJ : NSObject
{
    MQSessionID *_sessionID;
    TChatBaseViewModel *_viewModel;
    long long _targetLanguage;
    NSAttributedString *_sourceAttr;
    NSArray *_rules;
    NSArray *_sourceText;
    NSArray *_targetText;
}

+ (id)requestWithSession:(id)arg1 viewModel:(id)arg2;
@property(copy, nonatomic) NSArray *targetText; // @synthesize targetText=_targetText;
@property(copy, nonatomic) NSArray *sourceText; // @synthesize sourceText=_sourceText;
@property(copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(copy, nonatomic) NSAttributedString *sourceAttr; // @synthesize sourceAttr=_sourceAttr;
@property(nonatomic) long long targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(retain, nonatomic) TChatBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MQSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)init;

@end

