//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchSVG/SVGGroupElement.h>

@class NSSet;

@interface _SVGClipPath : SVGGroupElement
{
    NSSet *_clipping;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *clipping; // @synthesize clipping=_clipping;
- (void).cxx_destruct;
- (void)primitiveRemoveClippingObject:(id)arg1;
- (void)primitiveAddClippingObject:(id)arg1;
- (void)removeClippingObject:(id)arg1;
- (void)addClippingObject:(id)arg1;

@end

