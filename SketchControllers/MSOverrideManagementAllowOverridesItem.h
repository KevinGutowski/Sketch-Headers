//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/MSOverrideManagementItem.h>

@class MSBatchedSymbolMasters;

@interface MSOverrideManagementAllowOverridesItem : MSOverrideManagementItem
{
    MSBatchedSymbolMasters *_masters;
}

@property(retain, nonatomic) MSBatchedSymbolMasters *masters; // @synthesize masters=_masters;
- (void).cxx_destruct;
- (void)highlightItem:(BOOL)arg1;
@property(nonatomic) long long allowsOverrides;
- (id)initWithBatchedMasters:(id)arg1;

@end

