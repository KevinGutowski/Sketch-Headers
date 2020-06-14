//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSColorConverter-Protocol.h>

@class MSColor, MSImmutableColor, NSColorSpace, NSString;

@interface MSColorReplacementConverter : NSObject <MSColorConverter>
{
    BOOL _ignoreAlphaWhenMatching;
    BOOL _replaceAlphaOfOriginalColor;
    MSColor *_color;
    NSColorSpace *_colorSpace;
    MSImmutableColor *_immutableColor;
    MSImmutableColor *_immutableReplacementColor;
    MSColor *_replacementColor;
}

@property(readonly, nonatomic) MSColor *replacementColor; // @synthesize replacementColor=_replacementColor;
@property(readonly, nonatomic) BOOL replaceAlphaOfOriginalColor; // @synthesize replaceAlphaOfOriginalColor=_replaceAlphaOfOriginalColor;
@property(readonly, nonatomic) MSImmutableColor *immutableReplacementColor; // @synthesize immutableReplacementColor=_immutableReplacementColor;
@property(readonly, nonatomic) MSImmutableColor *immutableColor; // @synthesize immutableColor=_immutableColor;
@property(readonly, nonatomic) BOOL ignoreAlphaWhenMatching; // @synthesize ignoreAlphaWhenMatching=_ignoreAlphaWhenMatching;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (BOOL)shouldConvertImmutableColor:(id)arg1;
- (BOOL)shouldConvertColor:(id)arg1;
- (id)convertImmutableColor:(id)arg1;
- (id)convertColor:(id)arg1;
- (id)initWithColor:(id)arg1 replacementColor:(id)arg2 colorSpace:(id)arg3 ignoreAlphaWhenMatching:(BOOL)arg4 replaceAlphaOfOriginalColor:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
