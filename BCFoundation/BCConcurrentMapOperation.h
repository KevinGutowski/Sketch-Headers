//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface BCConcurrentMapOperation : NSOperation
{
    id _object;
    id _result;
    CDUnknownBlockType _mapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType mapBlock; // @synthesize mapBlock=_mapBlock;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)main;

@end

