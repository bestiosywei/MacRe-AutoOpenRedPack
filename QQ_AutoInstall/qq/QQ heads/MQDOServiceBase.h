//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQDOConnectionDelegate.h"

@class NSConnection, NSMutableDictionary;

@interface MQDOServiceBase : MQDOConnectionDelegate
{
    NSConnection *_serviceConnection;
    NSMutableDictionary *_uin2Connections;
    id _rootObject;
    id <MQDOServiceBaseDelegate> _delegate;
}

@property id <MQDOServiceBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enumerateAppsUsingBlock:(id)arg1;
- (id)anyApp;
- (id)appOfId:(unsigned long long)arg1;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1 appId:(unsigned long long)arg2;
- (void)handleConnectionBroken:(id)arg1;
- (BOOL)connection:(id)arg1 shouldMakeNewConnection:(id)arg2;
- (unsigned long long)numberOfConnectedApp;
- (BOOL)hasAnyAppToServe;
- (BOOL)launchService;
- (void)dealloc;
- (id)initWithRootObject:(id)arg1;
- (id)init;

@end

