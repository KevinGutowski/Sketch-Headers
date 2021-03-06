//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (NSMutableArrayAdditions)
+ (id)arrayWithCapacity:(unsigned long long)arg1 fill:(CDUnknownBlockType)arg2;
- (void)sortUsingKey:(id)arg1 selector:(SEL)arg2;
- (void)addObjectIfNotNil:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)removeFirstObject;
- (BOOL)consolidateAgainst:(id)arg1 withConsolidator:(id)arg2;
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;
@end

