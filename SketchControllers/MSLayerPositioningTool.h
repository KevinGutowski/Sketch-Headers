//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MSAlignmentEngineConstraint, NSArray;
@protocol _TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_;

@interface MSLayerPositioningTool : NSObject
{
    MISSING_TYPE *items;
    MISSING_TYPE *size;
    MISSING_TYPE *dragOffset;
    MISSING_TYPE *transform;
    MISSING_TYPE *_location;
    MISSING_TYPE *originalLocation;
    MISSING_TYPE *alignmentRectInsets;
    MISSING_TYPE *alignmentSettings;
    MISSING_TYPE *zoomScale;
    MISSING_TYPE *snapTargetProvider;
    MISSING_TYPE *alignmentConstraint;
    MISSING_TYPE *automaticallyChangeArtboard;
    MISSING_TYPE *layerHierarchyHasChanged;
}

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)finish;
- (id)moveByOffset:(struct CGVector)arg1;
- (id)performMoveToLocation:(struct CGPoint)arg1;
- (void)beginWithLayers:(id)arg1 location:(struct CGPoint)arg2;
@property(nonatomic) BOOL layerHierarchyHasChanged; // @synthesize layerHierarchyHasChanged;
@property(nonatomic) BOOL automaticallyChangeArtboard; // @synthesize automaticallyChangeArtboard;
- (id)reportCurrentSnaps;
@property(nonatomic, retain) MSAlignmentEngineConstraint *alignmentConstraint; // @synthesize alignmentConstraint;
@property(nonatomic) __weak id <_TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_> snapTargetProvider; // @synthesize snapTargetProvider;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(nonatomic) struct CGVector dragOffset; // @synthesize dragOffset;
- (struct CGPoint)positionFromLocation:(struct CGPoint)arg1;
@property(nonatomic, readonly) struct CGPoint position;
- (void)reset;
@property(nonatomic, copy) NSArray *items;

@end

