//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchSVG/SVGElement.h>

@class NSAffineTransform, NSSet, SVGGradient;

@interface _SVGGradient : SVGElement
{
    BOOL _radial;
    NSSet *_linkedFrom;
    SVGGradient *_linkedTo;
    NSSet *_usedByFills;
    NSSet *_usedByStrokes;
    double _fromX;
    double _fromY;
    double _toX;
    double _toY;
    NSAffineTransform *_transform;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) double toY; // @synthesize toY=_toY;
@property(nonatomic) double toX; // @synthesize toX=_toX;
@property(nonatomic) BOOL radial; // @synthesize radial=_radial;
@property(nonatomic) double fromY; // @synthesize fromY=_fromY;
@property(nonatomic) double fromX; // @synthesize fromX=_fromX;
@property(retain, nonatomic) NSSet *usedByStrokes; // @synthesize usedByStrokes=_usedByStrokes;
@property(retain, nonatomic) NSSet *usedByFills; // @synthesize usedByFills=_usedByFills;
@property(retain, nonatomic) SVGGradient *linkedTo; // @synthesize linkedTo=_linkedTo;
@property(retain, nonatomic) NSSet *linkedFrom; // @synthesize linkedFrom=_linkedFrom;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByStrokesObject:(id)arg1;
- (void)primitiveAddUsedByStrokesObject:(id)arg1;
- (void)removeUsedByStrokesObject:(id)arg1;
- (void)addUsedByStrokesObject:(id)arg1;
- (void)primitiveRemoveUsedByFillsObject:(id)arg1;
- (void)primitiveAddUsedByFillsObject:(id)arg1;
- (void)removeUsedByFillsObject:(id)arg1;
- (void)addUsedByFillsObject:(id)arg1;
- (void)primitiveSetLinkedTo:(id)arg1;
- (void)primitiveRemoveLinkedFromObject:(id)arg1;
- (void)primitiveAddLinkedFromObject:(id)arg1;
- (void)removeLinkedFromObject:(id)arg1;
- (void)addLinkedFromObject:(id)arg1;

@end
