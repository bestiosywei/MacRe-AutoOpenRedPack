//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BHStructMessageElement.h"

@class NSString;

@interface BHStructMessageImage : BHStructMessageElement
{
    NSString *_md5;
    NSString *_uuid;
}

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (id)node;
- (id)elementName;

@end
