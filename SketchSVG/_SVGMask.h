//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchSVG/SVGGroupElement.h>

@class NSSet;

@interface _SVGMask : SVGGroupElement
{
    NSSet *_masking;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *masking; // @synthesize masking=_masking;
- (void).cxx_destruct;
- (void)primitiveRemoveMaskingObject:(id)arg1;
- (void)primitiveAddMaskingObject:(id)arg1;
- (void)removeMaskingObject:(id)arg1;
- (void)addMaskingObject:(id)arg1;

@end

