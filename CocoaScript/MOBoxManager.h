//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface MOBoxManager : NSObject
{
    struct OpaqueJSContext *_context;
    NSMapTable *_index;
}

- (void).cxx_destruct;
- (void)removeBoxForObject:(id)arg1;
- (struct OpaqueJSValue *)makeBoxForObject:(id)arg1 jsClass:(struct OpaqueJSClass *)arg2;
- (id)boxForObject:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithContext:(struct OpaqueJSContext *)arg1;
- (void)associateObject:(id)arg1 jsObject:(struct OpaqueJSValue *)arg2;

@end
