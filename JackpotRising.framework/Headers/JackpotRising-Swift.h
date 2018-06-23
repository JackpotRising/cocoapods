// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="JackpotRising",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum JackpotRisingURL : NSInteger;
enum JackpotRisingAPIMode : NSInteger;
@protocol JackpotRisingDelegate;
enum JackpotRisingContestMode : NSInteger;
@class UIApplication;

/// JackpotRising Base Class
SWIFT_CLASS("_TtC13JackpotRising13JackpotRising")
@interface JackpotRising : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) JackpotRising * _Nonnull sharedInstance;)
+ (JackpotRising * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) enum JackpotRisingURL pointingURL;
@property (nonatomic) enum JackpotRisingAPIMode apiMode;
@property (nonatomic) BOOL testMode;
@property (nonatomic) BOOL walkAwayMode;
@property (nonatomic) NSInteger walkAwayTime;
@property (nonatomic) NSInteger walkAwayPromptTime;
@property (nonatomic, strong) id <JackpotRisingDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nullable deviceToken;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// SDK public function to open/show the JackpotRising SDK view from client
- (void)showSDK;
/// Method to initialize the JackpotRising SDK
/// \param clientID The Client ID generated for the game from Dashboard
///
/// \param clientSecret The client Secret Key generated for the game from Dashboard
///
- (void)initWithClientCredentials:(NSString * _Nonnull)clientID clientSecret:(NSString * _Nonnull)clientSecret SWIFT_METHOD_FAMILY(none);
/// Method to submit score for a tournament
/// \param score tournament score
///
- (void)submitScore:(double)score;
/// Method to indicate an advertisement was watched by user
- (void)contestAdWatched:(BOOL)status;
/// SDK Method to check whether a contest is currently running
///
/// returns:
/// contestRunningStatus:boolean
- (BOOL)isContestRunning SWIFT_WARN_UNUSED_RESULT;
/// SDK method to check the status of  contest in the sdk
///
/// returns:
/// contest status: JackpotRisingContestMode
- (enum JackpotRisingContestMode)getContestStatus SWIFT_WARN_UNUSED_RESULT;
/// Show JR loader incase of any delay while watching the video or playing the game
- (void)startJRLoader;
/// Hide and remove a running loader
- (void)stopJRLoader;
/// SDK  public method to catch open url method call in a client application,
/// this method needs to be called in the clients open url function
- (BOOL)application:(UIApplication * _Nonnull)app open:(NSURL * _Nonnull)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
- (void)initWithLaunchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_METHOD_FAMILY(none);
/// Method to set unique_id for a user
/// \param score tournament score
///
- (void)setUniqueId:(NSString * _Nonnull)id;
@end

typedef SWIFT_ENUM(NSInteger, JackpotRisingContestMode) {
  JackpotRisingContestModeNoContest = 0,
  JackpotRisingContestModeActive = 1,
  JackpotRisingContestModeNotStarted = 2,
  JackpotRisingContestModeEnded = 3,
  JackpotRisingContestModeInvalid = 4,
};

typedef SWIFT_ENUM(NSInteger, JackpotRisingURL) {
  JackpotRisingURLProduction = 0,
  JackpotRisingURLStaging = 1,
};

typedef SWIFT_ENUM(NSInteger, JackpotRisingAPIMode) {
  JackpotRisingAPIModeProduction = 0,
  JackpotRisingAPIModeTest = 1,
};


/// protocol methods to be implemented in a client of JackpotRising SDK
SWIFT_PROTOCOL("_TtP13JackpotRising21JackpotRisingDelegate_")
@protocol JackpotRisingDelegate <NSObject>
/// Method that returns the contest info
/// \param data contest info
///
- (void)contestStarted:(NSDictionary<NSString *, id> * _Nonnull)data;
/// Status of geo location fetching
/// \param status location fetch status
///
- (void)fetchLocationStatus:(BOOL)status;
/// User has cancelled the initial popup
- (void)initialPopupCancelled;
/// User closed the SDK
- (void)sdkClosed;
/// User started to play a contest.
/// You can start the game if the adStatus if False. Because there is no ad to watch.
/// Dont start the game if adStatus if True. Because the user has an ad to watch to refill the free attemps
/// \param adStatus status if there is an ad is present or not
///
- (void)playAd;
/// SDK failed to initialize due to some reasons
/// \param message reason why SDK couldn’t initialize
///
- (void)sdkFailedToInitialize:(NSString * _Nonnull)message;
@end









































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
