//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/NSObject-Protocol.h>

@class MSLayer, NSArray;

@protocol MSLayerContainment <NSObject>
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(void (^)(id, char *))arg2;
- (void)enumerateLayers:(void (^)(id))arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (MSLayer *)layerAtIndex:(long long)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (id)lastLayer;
- (id)firstLayer;
- (long long)containedLayersCount;
- (NSArray *)containedLayers;
@end
