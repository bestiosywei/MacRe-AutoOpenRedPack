//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQLevelDB : NSObject
{
    struct DB *_db;
    struct ReadOptions _readOptions;
    struct WriteOptions _writeOptions;
    NSString *_path;
}

+ (id)levelDBWithPath:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)deleteDB;
- (BOOL)clear;
- (void)enumerateKeys:(id)arg1;
- (id)allKeys;
- (BOOL)removeValueForKey:(id)arg1;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)dealloc;
- (void)close;
- (BOOL)openLeveldb;
- (id)initWithPath:(id)arg1;

@end

