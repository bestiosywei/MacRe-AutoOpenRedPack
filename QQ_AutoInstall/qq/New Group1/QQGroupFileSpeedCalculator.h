//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupFileSpeedCalculator : NSObject
{
    double _beginTime;
    float _beginValue;
    float _value;
    float _speed;
    double _calculateInterval;
}

@property(readonly, nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) double calculateInterval; // @synthesize calculateInterval=_calculateInterval;
- (void)begin;

@end

