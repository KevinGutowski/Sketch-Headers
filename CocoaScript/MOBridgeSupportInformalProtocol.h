//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CocoaScript/MOBridgeSupportSymbol.h>

@class NSArray, NSMutableArray;

@interface MOBridgeSupportInformalProtocol : MOBridgeSupportSymbol
{
    NSMutableArray *_methods;
}

- (void).cxx_destruct;
- (id)methodWithSelector:(SEL)arg1;
- (void)removeMethod:(id)arg1;
- (void)addMethod:(id)arg1;
@property(copy) NSArray *methods;
- (id)init;

@end

