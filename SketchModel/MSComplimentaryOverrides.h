//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSBatchedOverrides.h>

@class MISSING_TYPE, MSImmutableLayer, NSString;

@interface MSComplimentaryOverrides : MSBatchedOverrides
{
    MISSING_TYPE *previousCompimentaryOverrides;
    MISSING_TYPE *newAffectedLayer;
    MISSING_TYPE *overrideProperty;
    MISSING_TYPE *layerForPreview;
    MISSING_TYPE *titleIndentation;
}

- (void).cxx_destruct;
- (id)initWithBatchedMasters:(id)arg1 overrides:(id)arg2;
- (BOOL)setPropertiesForOverride:(id)arg1 atIndex:(long long)arg2;
- (id)initWithBatchedMasters:(id)arg1 overrides:(id)arg2 previousOverrides:(id)arg3;
@property(nonatomic, readonly) long long propertyIndentation;
@property(nonatomic) long long titleIndentation; // @synthesize titleIndentation;
@property(nonatomic, retain) MSImmutableLayer *layerForPreview; // @synthesize layerForPreview;
@property(nonatomic, copy) NSString *overrideProperty;
@property(nonatomic) BOOL newAffectedLayer; // @synthesize newAffectedLayer;

@end
