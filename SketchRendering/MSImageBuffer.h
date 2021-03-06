//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMemoryBuffer;

@interface MSImageBuffer : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _bytesPerRow;
    MSMemoryBuffer *_memoryBuffer;
}

@property(readonly, nonatomic) unsigned int bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) MSMemoryBuffer *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
- (void).cxx_destruct;
- (struct CGContext *)createCGContextForRenderingParameters:(struct MSRenderingParameters)arg1;
@property(readonly, nonatomic) void *data;
- (id)initWithMemoryBuffer:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4;

@end

