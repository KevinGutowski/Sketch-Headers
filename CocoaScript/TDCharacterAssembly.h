//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CocoaScript/TDAssembly.h>

@interface TDCharacterAssembly : TDAssembly
{
}

- (id)description;
- (id)remainingObjectsJoinedByString:(id)arg1;
- (id)consumedObjectsJoinedByString:(id)arg1;
- (unsigned long long)objectsRemaining;
- (unsigned long long)objectsConsumed;
- (unsigned long long)length;
- (BOOL)hasMore;
- (id)next;
- (id)peek;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)init;

@end
