//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSOutputStream, NSString, TAGPBArray, TAGPBGeneratedMessage;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Atomic<int> {
    int _field1;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

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

struct CLSMachOSlice {
    void *_field1;
    int _field2;
    int _field3;
};

struct ChannelGroupI;

struct ChannelPool;

struct Closure {
    struct array<void *, 4> _field1;
    int _field2;
};

struct Color {
    union {
        float _field1[4];
        struct {
            float _field1;
            float _field2;
            float _field3;
            float _field4;
        } _field2;
    } _field1;
};

struct DSPResampler;

struct Delegate {
    CDUnknownFunctionPointerType *_field1;
};

struct EventDispatcher;

struct FBAdDeviceBatteryInfo {
    long long _field1;
    double _field2;
};

struct FBAdDeviceCPUTime {
    double _field1;
    double _field2;
};

struct FBAdSize {
    struct CGSize size;
};

struct FBAdStarRating {
    double value;
    long long scale;
};

struct FBAspectRatioInfo {
    struct CGSize _field1;
    struct CGSize _field2;
};

struct FBNetworkUsage {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct FBSDKLikeControlLayout {
    struct CGSize _field1;
    struct CGRect _field2;
    struct CGRect _field3;
};

struct FMOD_OS_CRITICALSECTION;

struct FMOD_OS_LIBRARY;

struct FMOD_OS_SEMAPHORE;

struct FMOD_OUTPUT_DESCRIPTION_EX {
    char *_field1;
    unsigned int _field2;
    int _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    struct LinkedListNode *_field14;
    struct LinkedListNode *_field15;
    void *_field16;
    int _field17;
    int _field18;
    struct FMOD_OS_LIBRARY *_field19;
    unsigned int _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    CDUnknownFunctionPointerType _field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
    CDUnknownFunctionPointerType _field36;
    CDUnknownFunctionPointerType _field37;
    CDUnknownFunctionPointerType _field38;
    CDUnknownFunctionPointerType _field39;
    CDUnknownFunctionPointerType _field40;
    CDUnknownFunctionPointerType _field41;
};

struct FMOD_RECORDING_INFO {
    struct LinkedListNode *_field1;
    struct LinkedListNode *_field2;
    void *_field3;
    int _field4;
    int _field5;
    struct {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned char _field4[8];
    } _field6;
    _Bool _field7;
    int _field8;
    _Bool _field9;
    int _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct SoundI *_field13;
    int _field14;
    int _field15;
    struct DSPResampler *_field16;
    float *_field17;
    unsigned int _field18;
    void *_field19;
};

struct FastName {
    int _field1;
};

struct FilePath {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    int _field2;
};

struct Function<bool (DAVA::UIControl *, DAVA::UIEvent *)> {
    CDUnknownFunctionPointerType _field1;
    struct Closure _field2;
};

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct GamepadDevice {
    CDUnknownFunctionPointerType *_field1;
    struct Atomic<int> _field2;
    float _field3[14];
    int _field4;
    _Bool _field5;
};

struct Global;

struct IAPApplePriceFetcher {
    CDUnknownFunctionPointerType *_field1;
    struct IAPPriceFetchListener *_field2;
    struct ObjCFields *_field3;
};

struct IAPAppleService {
    CDUnknownFunctionPointerType *_field1;
    struct IAPTransactionListener *_field2;
    struct PurchaseTransactionLogger *_field3;
    struct ObjCFields *_field4;
    struct IAPApplePriceFetcher *_field5;
};

struct IAPPriceFetchListener;

struct IAPTransactionListener;

struct IUIWebViewDelegate {
    CDUnknownFunctionPointerType *_field1;
};

struct IWebViewControl;

struct LinkedListNode;

struct MusicIOSSoundEvent {
    CDUnknownFunctionPointerType *_field1;
    struct Atomic<int> _field2;
    struct list<DAVA::EventDispatcher::Event, std::__1::allocator<DAVA::EventDispatcher::Event>> _field3;
    _Bool _field4;
    int _field5;
    float _field6;
    _Bool _field7;
    void *_field8;
    struct FilePath _field9;
};

struct Mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } mutex;
};

struct NativeViewPool<UITextFieldHolder> {
    unsigned int usedViewsCount;
    struct vector<UITextFieldHolder *, std::__1::allocator<UITextFieldHolder *>> allocatedViews;
    struct Mutex mutex;
};

struct NativeViewPool<UIWebView> {
    unsigned int usedViewsCount;
    struct vector<UIWebView *, std::__1::allocator<UIWebView *>> allocatedViews;
    struct Mutex mutex;
};

struct ObjCFields;

struct OpaqueAudioComponentInstance;

struct OutputCoreAudio {
    CDUnknownFunctionPointerType *_field1;
    struct LinkedListNode *_field2;
    struct LinkedListNode *_field3;
    void *_field4;
    unsigned int _field5;
    struct SystemI *_field6;
    struct Global *_field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    _Bool _field10;
    struct ChannelPool *_field11;
    _Bool _field12;
    _Bool _field13;
    struct SystemI *_field14;
    int _field15;
    struct ChannelGroupI *_field16;
    int _field17;
    _Bool _field18;
    int _field19;
    int _field20;
    struct FMOD_OS_CRITICALSECTION *_field21;
    struct FMOD_RECORDING_INFO _field22;
    struct FMOD_RECORDING_INFO *_field23;
    struct FMOD_OUTPUT_DESCRIPTION_EX _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    struct OpaqueAudioComponentInstance *_field30;
    _Bool _field31;
    struct Thread _field32;
    char *_field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    _Bool _field39;
    struct OpaqueAudioComponentInstance *_field40;
    char *_field41;
    char *_field42;
    struct AudioBufferList _field43;
    int _field44;
    int _field45;
    int _field46;
    unsigned int _field47;
    _Bool _field48;
};

struct PurchaseTransactionLogger;

struct Rect {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct RefPtr<DAVA::UIControlPackageContext> {
    struct UIControlPackageContext *_field1;
};

struct SoundI;

struct SystemI;

struct TAGPBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    CDUnion_3de46016 _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct TAGPBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct TAGPBMessageEnumDescription {
    char *_field1;
};

struct TAGPBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct TAGPBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct TAGPBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    CDUnion_3de46016 _field8;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
    } _field9;
};

struct TAGPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct TextFieldPlatformImpl;

struct Thread {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    char _field3[256];
    void *_field4;
    _Bool _field5;
    void *_field6;
    void *_field7;
    struct FMOD_OS_SEMAPHORE *_field8;
    struct FMOD_OS_SEMAPHORE *_field9;
    CDUnknownFunctionPointerType _field10;
    struct SystemI *_field11;
    int _field12;
};

struct UIComponent;

struct UIControl;

struct UIControlBackground;

struct UIControlFamily;

struct UIControlPackageContext;

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIGeometricData {
    struct Vector2 _field1;
    struct Vector2 _field2;
    struct Vector2 _field3;
    struct Vector2 _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct Rect _field9;
};

struct UIStyleSheetClass;

struct UIStyleSheetClassSet {
    struct vector<DAVA::UIStyleSheetClass, std::__1::allocator<DAVA::UIStyleSheetClass>> _field1;
};

struct UITextField {
    CDUnknownFunctionPointerType *_field1;
    struct Atomic<int> _field2;
    struct Function<bool (DAVA::UIControl *, DAVA::UIEvent *)> _field3;
    struct FastName _field4;
    struct Vector2 _field5;
    struct UIControl *_field6;
    struct list<DAVA::UIControl *, std::__1::allocator<DAVA::UIControl *>> _field7;
    struct Vector2 _field8;
    struct Vector2 _field9;
    struct Vector2 _field10;
    float _field11;
    struct UIControlBackground *_field12;
    int _field13;
    int _field14;
    float _field15;
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
    unsigned int :1;
    unsigned int :1;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    struct UIGeometricData _field20;
    struct EventDispatcher *_field21;
    struct Color _field22;
    int _field23;
    int _field24;
    int _field25;
    unsigned int :1;
    struct vector<DAVA::UIComponent *, std::__1::allocator<DAVA::UIComponent *>> _field26;
    struct UIControlFamily *_field27;
    struct UIStyleSheetClassSet _field28;
    struct bitset<66> _field29;
    struct bitset<66> _field30;
    struct RefPtr<DAVA::UIControlPackageContext> _field31;
    struct UIControl *_field32;
    struct basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t>> _field33;
    struct UITextFieldDelegate *_field34;
    float _field35;
    int _field36;
    int _field37;
    int _field38;
    int _field39;
    int _field40;
    int _field41;
    int _field42;
    int _field43;
    _Bool _field44;
    _Bool _field45;
    _Bool _field46;
    _Bool _field47;
    struct shared_ptr<DAVA::TextFieldPlatformImpl> _field48;
    int _field49;
};

struct UITextFieldDelegate;

struct UIWebView {
    CDUnknownFunctionPointerType *_field1;
    struct Atomic<int> _field2;
    struct Function<bool (DAVA::UIControl *, DAVA::UIEvent *)> _field3;
    struct FastName _field4;
    struct Vector2 _field5;
    struct UIControl *_field6;
    struct list<DAVA::UIControl *, std::__1::allocator<DAVA::UIControl *>> _field7;
    struct Vector2 _field8;
    struct Vector2 _field9;
    struct Vector2 _field10;
    float _field11;
    struct UIControlBackground *_field12;
    int _field13;
    int _field14;
    float _field15;
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
    unsigned int :1;
    unsigned int :1;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    struct UIGeometricData _field20;
    struct EventDispatcher *_field21;
    struct Color _field22;
    int _field23;
    int _field24;
    int _field25;
    unsigned int :1;
    struct vector<DAVA::UIComponent *, std::__1::allocator<DAVA::UIComponent *>> _field26;
    struct UIControlFamily *_field27;
    struct UIStyleSheetClassSet _field28;
    struct bitset<66> _field29;
    struct bitset<66> _field30;
    struct RefPtr<DAVA::UIControlPackageContext> _field31;
    struct UIControl *_field32;
    struct shared_ptr<DAVA::IWebViewControl> _field33;
    _Bool _field34;
    int _field35;
};

struct Vector2 {
    union {
        CDStruct_b2fbf00d _field1;
        CDStruct_b2fbf00d _field2;
        float _field3[2];
    } _field1;
};

struct WebViewControl {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<DAVA::WebViewControl::WebViewObjcBridge, std::__1::default_delete<DAVA::WebViewControl::WebViewObjcBridge>> _field2;
    struct map<void *, bool, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, bool>>> _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    struct UIWebView *_field9;
};

struct WebViewObjcBridge;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __list_node<DAVA::EventDispatcher::Event, void *>;

struct __list_node<DAVA::UIControl *, void *>;

struct __raw {
    unsigned long long _field1[3];
};

struct __shared_weak_count;

struct array<void *, 4> {
    void *_field1[4];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t>> {
    struct __compressed_pair<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t>>::__rep, std::__1::allocator<wchar_t>> {
        struct __rep {
            union {
                struct __long {
                    int *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    int _field1[5];
                    struct {
                        unsigned char _field1[3];
                        unsigned char _field2;
                    } _field2;
                } _field2;
                struct __raw _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct bitset<66> {
    unsigned long long _field1[2];
};

struct in_addr {
    unsigned int _field1;
};

struct list<DAVA::EventDispatcher::Event, std::__1::allocator<DAVA::EventDispatcher::Event>> {
    struct __list_node_base<DAVA::EventDispatcher::Event, void *> {
        struct __list_node<DAVA::EventDispatcher::Event, void *> *_field1;
        struct __list_node<DAVA::EventDispatcher::Event, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<DAVA::EventDispatcher::Event, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<DAVA::UIControl *, std::__1::allocator<DAVA::UIControl *>> {
    struct __list_node_base<DAVA::UIControl *, void *> {
        struct __list_node<DAVA::UIControl *, void *> *_field1;
        struct __list_node<DAVA::UIControl *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<DAVA::UIControl *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<void *, bool, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, bool>>> {
    struct __tree<std::__1::__value_type<void *, bool>, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, bool>, std::__1::less<void *>, true>, std::__1::allocator<std::__1::__value_type<void *, bool>>> {
        struct __tree_node<std::__1::__value_type<void *, bool>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<void *, bool>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, bool>, std::__1::less<void *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct shared_ptr<DAVA::IWebViewControl> {
    struct IWebViewControl *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<DAVA::TextFieldPlatformImpl> {
    struct TextFieldPlatformImpl *_field1;
    struct __shared_weak_count *_field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct unique_ptr<DAVA::WebViewControl::WebViewObjcBridge, std::__1::default_delete<DAVA::WebViewControl::WebViewObjcBridge>> {
    struct __compressed_pair<DAVA::WebViewControl::WebViewObjcBridge *, std::__1::default_delete<DAVA::WebViewControl::WebViewObjcBridge>> {
        struct WebViewObjcBridge *_field1;
    } _field1;
};

struct vector<DAVA::UIComponent *, std::__1::allocator<DAVA::UIComponent *>> {
    struct UIComponent **_field1;
    struct UIComponent **_field2;
    struct __compressed_pair<DAVA::UIComponent **, std::__1::allocator<DAVA::UIComponent *>> {
        struct UIComponent **_field1;
    } _field3;
};

struct vector<DAVA::UIStyleSheetClass, std::__1::allocator<DAVA::UIStyleSheetClass>> {
    struct UIStyleSheetClass *_field1;
    struct UIStyleSheetClass *_field2;
    struct __compressed_pair<DAVA::UIStyleSheetClass *, std::__1::allocator<DAVA::UIStyleSheetClass>> {
        struct UIStyleSheetClass *_field1;
    } _field3;
};

struct vector<UITextFieldHolder *, std::__1::allocator<UITextFieldHolder *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UITextFieldHolder **, std::__1::allocator<UITextFieldHolder *>> {
        id *__first_;
    } __end_cap_;
};

struct vector<UIWebView *, std::__1::allocator<UIWebView *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UIWebView **, std::__1::allocator<UIWebView *>> {
        id *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
} CDStruct_e24ffa00;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_4355734a;

typedef struct {
    char *_field1;
    void *_field2;
    _Bool _field3;
    void *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
} CDStruct_1e2a2a70;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    char _field1[33];
    _Bool _field2;
    CDStruct_e24ffa00 _field3;
    CDStruct_e24ffa00 _field4;
    struct {
        void *_field1;
        unsigned long long _field2;
        void *_field3;
        void *_field4;
        void *_field5;
    } _field5;
    struct CLSMachOSlice _field6;
    long long _field7;
} CDStruct_762b38bc;

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    TAGPBGeneratedMessage *valueMessage;
    TAGPBGeneratedMessage *valueGroup;
    int valueEnum;
    TAGPBArray *valueArray;
    id valueObject;
} CDUnion_3de46016;

