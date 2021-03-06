//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSOverlayItem.h>

@class NSAttributedString;

@interface MSOverlayLabelItem : MSOverlayItem
{
    struct CGColor *_backgroundColorRef;
    NSAttributedString *_attributedString;
    double _rotation;
    double _cornerRadius;
    struct CGSize _padding;
    struct CGPoint _position;
    struct CGVector _displacement;
    struct CGPoint _anchorPoint;
}

@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) struct CGVector displacement; // @synthesize displacement=_displacement;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGSize padding; // @synthesize padding=_padding;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColorRef;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 padding:(struct CGSize)arg2 position:(struct CGPoint)arg3 displacement:(struct CGVector)arg4 anchorPoint:(struct CGPoint)arg5 rotation:(double)arg6 backgroundColor:(struct CGColor *)arg7 cornerRadius:(double)arg8;
- (id)init;

@end

