//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSImmutableFlowConnection.h>

@interface MSImmutableFlowConnection : _MSImmutableFlowConnection
{
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
- (struct MSFlowInfo)flowInfoFromParentLayer:(id)arg1 toArtboard:(id)arg2 type:(long long)arg3;
- (struct MSFlowInfo)flowInfoFromParentLayer:(id)arg1 toArtboard:(id)arg2;
- (long long)flowTypeForTransitionFromParentLayer:(id)arg1 toArtboard:(id)arg2;
- (BOOL)isValidFlowConnectionInDocumentData:(id)arg1;
@property(readonly, nonatomic) BOOL isBackAction;
- (id)lightweightCopyWithNewDestinationArtboard_Detach:(id)arg1;

@end

