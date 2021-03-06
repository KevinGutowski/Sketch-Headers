//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSTextStyle.h>

@class NSDictionary, NSString;

@interface MSTextStyle : _MSTextStyle
{
    NSDictionary *_decodedAttributes;
}

+ (id)styleWithAttributes:(id)arg1;
@property(copy, nonatomic) NSDictionary *decodedAttributes; // @synthesize decodedAttributes=_decodedAttributes;
- (void).cxx_destruct;
- (void)multiplyBy:(double)arg1;
- (id)stringByTransformingString:(id)arg1;
- (void)resetDecodedAttributes;
- (void)syncOwningTextLayerWithThisStyle;
@property(copy, nonatomic) NSDictionary *attributes;
- (void)updateAttributesWithoutSyncingOwningTextLayer:(id)arg1;
@property(readonly, nonatomic) NSString *fontPostscriptName;
@property(readonly, nonatomic) BOOL isRequiredFontAvailable;
- (id)treeAsDictionary;
- (void)replaceFonts:(id)arg1;

@end

