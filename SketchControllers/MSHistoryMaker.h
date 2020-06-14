//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSHistoryDelegate-Protocol.h>

@class MSHistory, NSString, NSTimer;
@protocol MSHistoryMakerDelegate;

@interface MSHistoryMaker : NSObject <MSHistoryDelegate>
{
    BOOL _isMovingThroughHistory;
    BOOL _historyIsCoalescing;
    BOOL _fontsDidChange;
    BOOL _isMakingHistory;
    id <MSHistoryMakerDelegate> _delegate;
    MSHistory *_history;
    NSString *_historyMomentTitle;
    long long _deferMakingHistoryCounter;
    NSTimer *_commitTimer;
}

@property(retain, nonatomic) NSTimer *commitTimer; // @synthesize commitTimer=_commitTimer;
@property long long deferMakingHistoryCounter; // @synthesize deferMakingHistoryCounter=_deferMakingHistoryCounter;
@property(nonatomic) BOOL isMakingHistory; // @synthesize isMakingHistory=_isMakingHistory;
@property(nonatomic) BOOL fontsDidChange; // @synthesize fontsDidChange=_fontsDidChange;
@property(nonatomic) BOOL historyIsCoalescing; // @synthesize historyIsCoalescing=_historyIsCoalescing;
@property(nonatomic) BOOL isMovingThroughHistory; // @synthesize isMovingThroughHistory=_isMovingThroughHistory;
@property(retain, nonatomic) NSString *historyMomentTitle; // @synthesize historyMomentTitle=_historyMomentTitle;
@property(readonly, nonatomic) MSHistory *history; // @synthesize history=_history;
@property(readonly, nonatomic) __weak id <MSHistoryMakerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)history:(id)arg1 didCommitMoment:(id)arg2;
- (void)commitTimerFired:(id)arg1;
- (void)startCommitTimer;
- (void)installedFontsChanged;
- (BOOL)ignoreDocumentChangesInBlock:(CDUnknownBlockType)arg1;
- (void)moveThroughHistoryBackInTime:(BOOL)arg1;
- (BOOL)canMoveThroughHistoryBackInTime:(BOOL)arg1;
- (void)updateCurrentMomentWithSelection:(id)arg1;
- (void)makeHistoryIfNecessaryUsingTransientMoment:(BOOL)arg1;
- (void)deferMakingHistoryInBlock:(CDUnknownBlockType)arg1;
- (void)makeTransientMomentInHistoryIfNecessary;
- (void)makeHistoryIfNecessary;
- (void)commitTransientMomentIfNecessary;
- (void)coalesceHistoryInBlock:(CDUnknownBlockType)arg1;
- (void)finishCoalescingHistory;
- (void)startCoalescingHistory;
- (void)registerHistoryMomentTitle:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 initialDocumentData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

