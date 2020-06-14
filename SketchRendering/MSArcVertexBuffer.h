//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSArcVertexBuffer : NSObject
{
    const struct MSArcVertex *_verticies;
    const unsigned int *_indicies;
    unsigned long long _indexCount;
    unsigned long long _vertexCount;
}

+ (id)arcVertexBufferWithBuffers:(id)arg1;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(readonly, nonatomic) const unsigned int *indicies; // @synthesize indicies=_indicies;
@property(readonly, nonatomic) const struct MSArcVertex *verticies; // @synthesize verticies=_verticies;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long indiciesLength;
@property(readonly, nonatomic) unsigned long long verticiesLength;
- (id)initWithVerticies:(struct MSArcVertex *)arg1 vertexCount:(unsigned long long)arg2 indicies:(unsigned int *)arg3 indexCount:(unsigned long long)arg4;
- (id)init;

@end
