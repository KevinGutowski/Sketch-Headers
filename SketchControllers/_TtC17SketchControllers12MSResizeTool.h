//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol MSLayerCoordinateSpace;

@interface _TtC17SketchControllers12MSResizeTool : NSObject
{
    MISSING_TYPE *items;
    MISSING_TYPE *handle;
    MISSING_TYPE *referenceGeometry;
    MISSING_TYPE *size;
    MISSING_TYPE *flippedHorizontally;
    MISSING_TYPE *flippedVertically;
    MISSING_TYPE *rotation;
    MISSING_TYPE *$__lazy_storage_$_coordinateSpace;
    MISSING_TYPE *$__lazy_storage_$_unitCoordinateSpace;
    MISSING_TYPE *alignmentSettings;
    MISSING_TYPE *roundingIncrement;
    MISSING_TYPE *snappingResult;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) id <MSLayerCoordinateSpace> unitCoordinateSpace;
@property(nonatomic, retain) id <MSLayerCoordinateSpace> coordinateSpace;
@property(nonatomic) BOOL flippedVertically; // @synthesize flippedVertically;
@property(nonatomic) BOOL flippedHorizontally; // @synthesize flippedHorizontally;
@property(nonatomic) long long handle; // @synthesize handle;

@end

