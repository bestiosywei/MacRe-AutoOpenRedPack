//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonTransferTask.h"

@class FAModel;

@interface FileMessageTransferTask : CommonTransferTask
{
    FAModel *_faModel;
    BOOL _isEnd;
}

- (void).cxx_destruct;
- (id)description;
- (void)bindTaskErrorInfo:(id)arg1;
- (void)_doTransferTaskError:(id)arg1;
- (void)_doTransferTaskProcess:(float)arg1 speed:(unsigned long long)arg2;
- (void)_doTransferTaskProcess:(float)arg1;
- (void)_doTransferTaskSuccess:(id)arg1;
- (void)onAssignTaskID;
- (id)initWithFaModel:(id)arg1;

@end
