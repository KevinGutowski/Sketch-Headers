//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSMemoryBuffer : NSObject
{
    unsigned long long _size;
    void *_bytes;
}

@property(readonly, nonatomic) void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)zerofill:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;

@end

