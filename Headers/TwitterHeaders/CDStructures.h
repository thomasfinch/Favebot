//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct RenderTarget {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct Renderer {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
    struct RenderTarget *_field5[16];
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct UIOffset {
    float _field1;
    float _field2;
};

struct _Crashlytics__CustomAttribute;

struct _Crashlytics__Session {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _ProtobufCBinaryData _field3;
    unsigned long long _field4;
    int _field5;
    unsigned long long _field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    struct _Crashlytics__Session__User *_field15;
    struct _Crashlytics__Session__Application *_field16;
    struct _Crashlytics__Session__OperatingSystem *_field17;
    struct _Crashlytics__Session__Device *_field18;
    unsigned int _field19;
    struct _Crashlytics__Session__Event **_field20;
};

struct _Crashlytics__Session__Application {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    int _field9;
    int _field10;
    struct _Crashlytics__Session__Application__Process *_field11;
    struct _Crashlytics__Session__Application__Organization *_field12;
};

struct _Crashlytics__Session__Application__Organization;

struct _Crashlytics__Session__Application__Process;

struct _Crashlytics__Session__Device {
    struct _ProtobufCMessage _field1;
    int _field2;
    struct _ProtobufCBinaryData _field3;
    int _field4;
    struct _ProtobufCBinaryData _field5;
    int _field6;
    char *_field7;
    int _field8;
    unsigned int _field9;
    int _field10;
    unsigned long long _field11;
    int _field12;
    unsigned long long _field13;
    char *_field14;
    char *_field15;
    int _field16;
    int _field17;
    unsigned int _field18;
    struct _Crashlytics__Session__Device__Identifier **_field19;
    int _field20;
    unsigned int _field21;
    char *_field22;
    char *_field23;
};

struct _Crashlytics__Session__Device__Identifier;

struct _Crashlytics__Session__Event {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    char *_field3;
    char *_field4;
    struct _Crashlytics__Session__Event__Application *_field5;
    struct _Crashlytics__Session__Event__OperatingSystem *_field6;
    struct _Crashlytics__Session__Event__Device *_field7;
    struct _Crashlytics__Session__Event__Log *_field8;
};

struct _Crashlytics__Session__Event__Application;

struct _Crashlytics__Session__Event__Device;

struct _Crashlytics__Session__Event__Log;

struct _Crashlytics__Session__Event__OperatingSystem;

struct _Crashlytics__Session__OperatingSystem {
    struct _ProtobufCMessage _field1;
    int _field2;
    char *_field3;
    char *_field4;
    int _field5;
    int _field6;
};

struct _Crashlytics__Session__User {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    unsigned int _field5;
    struct _Crashlytics__CustomAttribute **_field6;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _ProtobufCBinaryData {
    unsigned int _field1;
    char *_field2;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct _TFNFileFunctionLine {
    char *file;
    char *function;
    int line;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned int total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned int adler;
    unsigned int reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool set;
    unsigned char flags;
    int value;
} CDStruct_2ea23212;

typedef struct {
    unsigned char bugFix;
    unsigned char revision;
    unsigned char minor;
    unsigned char major;
} CDStruct_64709a0b;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    unsigned int seconds[20];
    unsigned int subsecond[20];
} CDStruct_0d15ed6d;

typedef struct {
    void *_field1;
    unsigned int _field2;
} CDStruct_f8bc7150;

typedef struct {
    unsigned int didGlobalNotification:1;
    unsigned int searchResultType:3;
    unsigned int mentionsLoadingAccount:1;
    unsigned int favoritedByLoadingAccount:1;
    unsigned int retweetedByLoadingAccount:1;
    unsigned int bookmarkedByLoadingAccount:1;
    unsigned int favoriteChangePending:1;
    unsigned int retweetChangePending:1;
    unsigned int hasURLEntitiesInDatabase:1;
    unsigned int hasRecordedImpression:1;
    unsigned int didPrepare:1;
    unsigned int didCacheMediaInfo:1;
    unsigned int updatedTextHeight:1;
    unsigned int autoExpandMode:2;
    unsigned int isPossiblySensitive:1;
    unsigned int isLifelineAlert:1;
} CDStruct_53b21928;

typedef struct {
    double _field1;
    char _field2;
} CDStruct_16abe4d0;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int _field1;
    int _field2;
    char *_field3;
    _Bool _field4;
    char *_field5;
    _Bool _field6;
} CDStruct_9c005df8;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    CDStruct_183601bc *_field3;
} CDStruct_a6175b54;

typedef struct {
    CDStruct_0d15ed6d total;
    CDStruct_0d15ed6d launch;
    CDStruct_0d15ed6d normalRunning;
    CDStruct_0d15ed6d enterBackgroundLatest;
    CDStruct_0d15ed6d enterBackgroundTotal;
    CDStruct_0d15ed6d enterForegroundLatest;
    CDStruct_0d15ed6d enterForegroundTotal;
} CDStruct_c0970014;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    unsigned long activity;
    double activityStartTime;
    CDStruct_c0970014 sourcesActivityCounts;
    CDStruct_c0970014 timersActivityCounts;
} CDStruct_b60bbf17;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
} CDStruct_0b25e1d6;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
} CDStruct_d917fa49;

// Ambiguous groups
typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_58737c45;

typedef struct {
    unsigned int loadingNext:1;
    unsigned int isAtEnd:1;
} CDStruct_29d36c50;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    int width;
    int height;
} CDStruct_79c71658;

typedef struct {
    int x;
    int y;
} CDStruct_ffe6b7c1;
