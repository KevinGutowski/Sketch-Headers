//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, _TtC17SketchControllers12MSResizeTool;

@interface _TtC17SketchControllers15MSResizeSession : NSObject
{
    MISSING_TYPE *layers;
    MISSING_TYPE *tool;
    MISSING_TYPE *_isValid;
    MISSING_TYPE *zoomScale;
    MISSING_TYPE *visibleRect;
    MISSING_TYPE *_mouseLocation;
    MISSING_TYPE *options;
}

- (void).cxx_destruct;
- (id)init;
- (id)updateModel;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)updateWithPoint:(struct CGPoint)arg1 modifierFlags:(unsigned long long)arg2;
- (void)updateWithDragRecognizer:(id)arg1;
@property(nonatomic) unsigned long long snapMask;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
- (void)dealloc;
- (void)finish;
- (id)initWithLayers:(id)arg1 handle:(long long)arg2;
- (id)initWithLayer:(id)arg1 handle:(long long)arg2;
@property(nonatomic, readonly) _TtC17SketchControllers12MSResizeTool *tool; // @synthesize tool;
@property(nonatomic, readonly) NSArray *layers;

@end

