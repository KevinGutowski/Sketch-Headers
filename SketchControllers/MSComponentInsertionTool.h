//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MSPage;

@interface MSComponentInsertionTool : NSObject
{
    MISSING_TYPE *page;
    MISSING_TYPE *size;
    MISSING_TYPE *location;
    MISSING_TYPE *zoomScale;
    MISSING_TYPE *visibleRect;
    MISSING_TYPE *alignmentSettings;
    MISSING_TYPE *snappingEnabled;
    MISSING_TYPE *snappingResult;
    MISSING_TYPE *meshSnapMask;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL snappingEnabled; // @synthesize snappingEnabled;
@property(nonatomic) unsigned long long snapMask;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
- (id)updateWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)locationIn:(id)arg1;
@property(nonatomic, readonly) struct CGSize size; // @synthesize size;
@property(nonatomic, readonly) MSPage *page; // @synthesize page;
- (id)initWithComponentSize:(struct CGSize)arg1 targetPage:(id)arg2;

@end

