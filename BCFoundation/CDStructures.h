//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct DiffPath {
    unsigned long long _field1;
    struct DiffPathItem *_field2;
    struct DiffPath *_field3;
};

struct DiffPathItem {
    unsigned long long _field1;
    unsigned long long _field2;
    struct DiffPathItem *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    void *_field1;
    long long _field2;
} CDStruct_eb6fb79d;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

