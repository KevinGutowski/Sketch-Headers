//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSJSONUnarchiver.h>

@class BCJSONDecoder, NSData;

@interface MSJSONDataUnarchiver : MSJSONUnarchiver
{
    BCJSONDecoder *_dataDecoder;
    NSData *_data;
}

+ (id)unarchivedObjectWithString:(id)arg1 asVersion:(long long)arg2 corruptionDetected:(char *)arg3 error:(id *)arg4;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) BCJSONDecoder *dataDecoder; // @synthesize dataDecoder=_dataDecoder;
- (void).cxx_destruct;
- (id)decodeReferenceObjectOfClass:(id)arg1 withIdentifier:(id)arg2;
- (id)decodeRoot;
- (id)decoder;
- (id)initForReadingFromData:(id)arg1;

@end

