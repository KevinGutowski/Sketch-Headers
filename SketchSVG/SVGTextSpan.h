//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SVGTextSpan : NSObject
{
    NSString *_text;
    NSDictionary *_attributes;
    struct CGRect _rect;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

