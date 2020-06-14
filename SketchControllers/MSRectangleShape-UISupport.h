//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSRectangleShape.h>

@class NSString;

@interface MSRectangleShape (UISupport)
+ (BOOL)validateComponentString:(id)arg1;
+ (id)componentStringWithValues:(id)arg1;
+ (BOOL)looksLikeComponentString:(id)arg1;
+ (BOOL)useSmoothCorners;
+ (double)lastUsedCornerRadius;
- (void)resetPointsBasedOnUserInteraction;
@property(readonly, nonatomic) BOOL smoothCornersAllowed;
@property(nonatomic) BOOL hasSmoothCorners;
- (void)didChangeValues;
- (void)willChangeValues;
- (double)floatFromNumbers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCornerRadiusFromSimpleString:(id)arg1;
- (void)setCornerRadiusFromComponents:(id)arg1;
@property(copy, nonatomic) NSString *cornerRadiusString;
- (id)rectangleNumberFormatter;
@property(nonatomic) double cornerRadiusFloat;
@property(nonatomic) double normalizedExponentialCornerRadius;
- (BOOL)validateProposedCornerRadiusWithFloat:(double)arg1;
- (BOOL)validateProposedCornerRadiusSizeWithString:(id)arg1;
@end

