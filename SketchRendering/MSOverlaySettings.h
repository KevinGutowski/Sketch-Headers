//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/NSCopying-Protocol.h>

@interface MSOverlaySettings : NSObject <NSCopying>
{
    struct CGColor *_colors[10];
    unsigned long long _layoutGridStyle;
    unsigned long long _options;
}

+ (id)defaultsKeyPaths;
+ (id)settingsFromTheme:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long layoutGridStyle; // @synthesize layoutGridStyle=_layoutGridStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToSettings:(id)arg1;
- (struct CGColor *)colorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithColors:(struct CGColor *[10])arg1 options:(unsigned long long)arg2 layoutGridStyle:(unsigned long long)arg3;

@end
