//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCDWebServerHandler : NSObject
{
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _asyncProcessBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType asyncProcessBlock; // @synthesize asyncProcessBlock=_asyncProcessBlock;
@property(readonly, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
- (void).cxx_destruct;
- (id)initWithMatchBlock:(CDUnknownBlockType)arg1 asyncProcessBlock:(CDUnknownBlockType)arg2;

@end

