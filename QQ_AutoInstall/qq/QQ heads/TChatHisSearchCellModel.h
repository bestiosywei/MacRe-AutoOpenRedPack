//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TChatHisSeacherModel;

@interface TChatHisSearchCellModel : NSObject
{
    BOOL _isSection;
    TChatHisSeacherModel *_tchatSearcherModel;
    NSString *_sectionTitle;
}

@property(copy) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property BOOL isSection; // @synthesize isSection=_isSection;
@property(retain) TChatHisSeacherModel *tchatSearcherModel; // @synthesize tchatSearcherModel=_tchatSearcherModel;
- (void).cxx_destruct;

@end
