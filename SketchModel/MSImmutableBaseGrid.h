//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSImmutableBaseGrid.h>

@interface MSImmutableBaseGrid : _MSImmutableBaseGrid
{
    BOOL _forceDraw;
}

+ (BOOL)displayableAtZoom:(double)arg1;
+ (void)initialize;
@property(nonatomic) BOOL forceDraw; // @synthesize forceDraw=_forceDraw;
- (BOOL)shouldDrawAtZoom:(double)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

