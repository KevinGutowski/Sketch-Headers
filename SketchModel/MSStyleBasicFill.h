//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSStyleBasicFill.h>

#import <SketchModel/MSColorConvertible-Protocol.h>

@class NSString;

@interface MSStyleBasicFill : _MSStyleBasicFill <MSColorConvertible>
{
}

@property(copy, nonatomic) NSString *hexColor;
- (void)convertColorsUsing:(id)arg1;
- (void)performInitEmptyObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
