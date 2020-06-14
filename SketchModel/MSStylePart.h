//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSStylePart.h>

#import <SketchModel/MSStylePartProtocol-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@interface MSStylePart : _MSStylePart <NSCopying, MSStylePartProtocol>
{
}

+ (id)defaultStylePartForStyle:(id)arg1;
- (unsigned long long)styleType;
- (id)parentLayer;
- (id)parentStyle;
- (void)multiplyBy:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL isEnabled;

@end
