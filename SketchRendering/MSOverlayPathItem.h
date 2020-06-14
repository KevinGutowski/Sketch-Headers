//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSOverlayItem.h>

@class MSPath, NSArray;

@interface MSOverlayPathItem : MSOverlayItem
{
    MSPath *_transformedPath;
    _Atomic void *_transformedPathAtomicPointer;
    struct CGColor *_colorRef;
    MSPath *_path;
    double _lineWidth;
    NSArray *_dashes;
    struct CGAffineTransform _transform;
}

+ (id)itemForPath:(id)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3 lineWidth:(double)arg4 dashes:(id)arg5;
+ (id)itemForPath:(id)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3 lineWidth:(double)arg4;
+ (id)filledItemForPath:(id)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3;
@property(readonly, copy, nonatomic) NSArray *dashes; // @synthesize dashes=_dashes;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) MSPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=_colorRef;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSPath *transformedPath;
@property(readonly, nonatomic) BOOL hasDashes;
@property(readonly, nonatomic) BOOL isFilled;
- (void)dealloc;
- (id)initWithPath:(id)arg1 transform:(struct CGAffineTransform)arg2 color:(struct CGColor *)arg3 lineWidth:(double)arg4 dashes:(id)arg5;
- (id)init;

@end
