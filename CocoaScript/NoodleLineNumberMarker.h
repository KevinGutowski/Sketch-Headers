//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSRulerMarker.h>

@interface NoodleLineNumberMarker : NSRulerMarker
{
    unsigned long long lineNumber;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (id)initWithRulerView:(id)arg1 lineNumber:(double)arg2 image:(id)arg3 imageOrigin:(struct CGPoint)arg4;

@end

