//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/MSLayerTraits-Protocol.h>
#import <SketchControllers/NSObject-Protocol.h>

@class NSAffineTransform, NSArray, NSString;

@protocol MSLayerProtocol <NSObject, MSLayerTraits>
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) NSString *objectID;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isVisible;
- (BOOL)hasEnabledFill;
- (NSArray *)childrenIncludingSelf:(BOOL)arg1;
- (NSArray *)children;
- (id)layerWithID:(NSString *)arg1;
- (NSAffineTransform *)transformForRect:(struct CGRect)arg1;
@end

