//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSPDFPage : NSObject
{
    struct CGPDFPage *_pageRef;
    struct CGSize _size;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) struct CGPDFPage *pageRef; // @synthesize pageRef=_pageRef;
- (void)dealloc;
- (id)initWithPDFData:(id)arg1;

@end
