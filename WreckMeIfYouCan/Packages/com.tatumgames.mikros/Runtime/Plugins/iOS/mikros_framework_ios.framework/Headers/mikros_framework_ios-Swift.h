// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef MIKROS_FRAMEWORK_IOS_SWIFT_H
#define MIKROS_FRAMEWORK_IOS_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="mikros_framework_ios",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSNumber;
@class AnalyticsEventConfiguration;

///
SWIFT_CLASS("_TtC20mikros_framework_ios29AnalyticsConfigurationBuilder")
@interface AnalyticsConfigurationBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Setter for <a href="x-source-tag://minimumQueueSize">minimumQueueSize</a>
/// for setting properties of Mikros Analytics event tracking.
/// \param minimumQueueSize Minimum queue size before making post calls to Mikros.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsConfigurationBuilder">AnalyticsConfigurationBuilder</a>
- (AnalyticsConfigurationBuilder * _Nonnull)setWithMinimumQueueSize:(NSInteger)minimumQueueSize SWIFT_WARN_UNUSED_RESULT;
/// Setter for <a href="x-source-tag://maximumQueueSize">maximumQueueSize</a>
/// for setting properties of Mikros Analytics event tracking.
/// \param maximumQueueSize Max queue size for making post calls to Mikros.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsConfigurationBuilder">AnalyticsConfigurationBuilder</a>
- (AnalyticsConfigurationBuilder * _Nonnull)setWithMaximumQueueSize:(NSInteger)maximumQueueSize SWIFT_WARN_UNUSED_RESULT;
/// Setter for <a href="x-source-tag://recurringTaskInMinutes">recurringTaskInMinutes</a>
/// for setting properties of Mikros Analytics event tracking.
/// \param recurringTaskInMinutes Configurable time to schedule task to post Mikros events.
/// Default is 600 minutes (10 hours).
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsConfigurationBuilder">AnalyticsConfigurationBuilder</a>
- (AnalyticsConfigurationBuilder * _Nonnull)setWithRecurringTaskInMinutes:(int64_t)recurringTaskInMinutes SWIFT_WARN_UNUSED_RESULT;
/// Setter for <a href="x-source-tag://eventLogging">eventLogging</a>
/// for setting properties of Mikros Analytics event tracking.
/// \param eventLogging Allow to disable/enable the Mikros Analytics logger.
/// True by default.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsConfigurationBuilder">AnalyticsConfigurationBuilder</a>
- (AnalyticsConfigurationBuilder * _Nonnull)setWithEventLogging:(BOOL)eventLogging SWIFT_WARN_UNUSED_RESULT;
- (AnalyticsEventConfiguration * _Nullable)createAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC20mikros_framework_ios27AnalyticsEventConfiguration")
@interface AnalyticsEventConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



///
SWIFT_CLASS("_TtC20mikros_framework_ios29AnalyticsSessionConfiguration")
@interface AnalyticsSessionConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



///
SWIFT_CLASS("_TtC20mikros_framework_ios36AnalyticsSessionConfigurationBuilder")
@interface AnalyticsSessionConfigurationBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Setter for <a href="x-source-tag://sessionTimeout">sessionTimeout</a>
/// for setting properties of Mikros Analytics session event tracking.
/// \param sessionTimeout The period of time a user is active on your site or app.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsSessionConfigurationBuilder">AnalyticsSessionConfigurationBuilder</a>
- (AnalyticsSessionConfigurationBuilder * _Nonnull)setWithSessionTimeout:(NSInteger)sessionTimeout SWIFT_WARN_UNUSED_RESULT;
/// Setter for <a href="x-source-tag://minimumSessionLengthValidity">minimumSessionLengthValidity</a>
/// for setting properties of Mikros Analytics session event tracking.
/// \param minimumSessionLengthValidity Max queue size for making post calls to Mikros.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsSessionConfigurationBuilder">AnalyticsSessionConfigurationBuilder</a>
- (AnalyticsSessionConfigurationBuilder * _Nonnull)setWithMinimumSessionLengthValidity:(NSInteger)minimumSessionLengthValidity SWIFT_WARN_UNUSED_RESULT;
/// Setter for <a href="x-source-tag://eventLogging">eventLogging</a>
/// for setting properties of Mikros Analytics session event tracking.
/// \param eventLogging Allow to disable/enable the Mikros Analytics logger.
/// True by default.
///
///
/// returns:
/// <a href="x-source-tag://AnalyticsSessionConfigurationBuilder">AnalyticsSessionConfigurationBuilder</a>
- (AnalyticsSessionConfigurationBuilder * _Nonnull)setWithEventLogging:(BOOL)eventLogging SWIFT_WARN_UNUSED_RESULT;
- (AnalyticsSessionConfiguration * _Nullable)createAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end


/// This class encapsulates HTTP logic.
SWIFT_CLASS("_TtC20mikros_framework_ios13BaseApiClient")
@interface BaseApiClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



///
SWIFT_CLASS("_TtC20mikros_framework_ios19ClientConfiguration")
@interface ClientConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSString;

SWIFT_CLASS("_TtC20mikros_framework_ios26ClientConfigurationBuilder")
@interface ClientConfigurationBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (ClientConfigurationBuilder * _Nonnull)setWithApiKey:(NSString * _Nullable)apiKey SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithBaseUrl:(NSString * _Nullable)baseUrl SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithAppGameId:(NSString * _Nullable)appGameId SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithApiKeyType:(NSString * _Nullable)apiKeyType SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithDeviceId:(NSString * _Nullable)deviceId SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithAppVersion:(NSString * _Nullable)appVersion SWIFT_WARN_UNUSED_RESULT;
- (ClientConfigurationBuilder * _Nonnull)setWithSdkVersion:(NSString * _Nullable)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (ClientConfiguration * _Nullable)createAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end


/// Interface for updating main properties for Mikros Analytics events logging.
SWIFT_PROTOCOL("_TtP20mikros_framework_ios43MikrosAnalyticsEventConfigurationProperties_")
@protocol MikrosAnalyticsEventConfigurationProperties
/// Method used to update the value of event logging, allowing to enable or disable
/// Mikros Analytics events once the configuration has been set.
/// \param isEnabled Enable or disable Mikros Analytics events tracking.
///
- (void)updateEventLoggingWithIsEnabled:(BOOL)isEnabled;
/// Method is used to update configuration <a href="x-source-tag://minimumQueueSize">minimumQueueSize</a>.
/// \param minimumQueueSize Minimum queue size before making post calls to Mikros.
///
- (void)updateMinimumQueueSizeWithMinimumQueueSize:(NSInteger)minimumQueueSize;
/// Method is used to update configuration <a href="x-source-tag://maximumQueueSize">maximumQueueSize</a>.
/// \param maximumQueueSize Max queue size for making post calls to Mikros.
///
- (void)updateMaximumQueueSizeWithMaximumQueueSize:(NSInteger)maximumQueueSize;
/// Method is used to update configuration <a href="x-source-tag://recurringTaskInMinutes">recurringTaskInMinutes</a>.
/// \param recurringTaskInMinutes Configurable time to schedule task to post Mikros events.
/// Default is 600 minutes (10 hours).
///
- (void)updateRecurringTaskInMinutesWithRecurringTaskInMinutes:(int64_t)recurringTaskInMinutes;
/// Returns <a href="x-source-tag://AnalyticsEventConfiguration">AnalyticsEventConfiguration</a> information
/// used by the <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a>.
///
/// returns:
/// <a href="x-source-tag://AnalyticsEventConfiguration">AnalyticsEventConfiguration</a>
- (AnalyticsEventConfiguration * _Nonnull)getAnalyticsConfiguration SWIFT_WARN_UNUSED_RESULT;
/// Update analytics configuration.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param analyticsConfiguration REQUIRED: Configuration that collects
/// information about how to handle processed events for Mikros Analytics.
///
- (void)updateAnalyticsConfigurationWithAnalyticsConfiguration:(AnalyticsEventConfiguration * _Nonnull)analyticsConfiguration;
@end

@class MikrosEvent;

/// Interface for main entry point for Mikros Analytics events logging.
/// This public interface extends
/// <a href="x-source-tag://MikrosAnalyticsEventConfigurationProperties">MikrosAnalyticsEventConfigurationProperties</a>
SWIFT_PROTOCOL("_TtP20mikros_framework_ios26MikrosAnalyticsEventLogger_")
@protocol MikrosAnalyticsEventLogger <MikrosAnalyticsEventConfigurationProperties>
/// Method to POST Mikros Analytics events.
/// The request object is formed by the non-native SDK that extends this native library.
/// For this method, the integrator can pass in their formed object.
/// \param eventRequest Tracked event to send to Mikros Analytics.
///
- (void)logEvent:(MikrosEvent * _Nullable)eventRequest;
/// Method used to flush events in current queue. This will fire a one time task to
/// flush events.
- (void)flushEvents;
@end


/// Interface for updating main properties for Mikros Analytics session logging.
SWIFT_PROTOCOL("_TtP20mikros_framework_ios45MikrosAnalyticsSessionConfigurationProperties_")
@protocol MikrosAnalyticsSessionConfigurationProperties
/// Method used to update the value of event logging, allowing to enable or disable
/// Mikros Analytics events once the configuration has been set.
/// Enable or disable Mikros Analytics session tracking.
- (void)updateSessionLoggingWithIsEnabled:(BOOL)isEnabled;
/// Method is used to update session configuration <a href="x-source-tag://sessionTimeout">sessionTimeout</a>.
/// \param sessionTimeout The period of time a user is active in the app.
///
- (void)updateSessionTimeoutWithSessionTimeout:(NSInteger)sessionTimeout;
/// Method is used to update session configuration
/// <a href="x-source-tag://minimumSessionLengthValidity">minimumSessionLengthValidity</a>.
/// \param minimumSessionLengthValidity Represents the minimum length of a session
/// or it to be valid.
///
- (void)updateMinimumSessionLengthValidityWithMinimumSessionLengthValidity:(NSInteger)minimumSessionLengthValidity;
/// Returns <a href="x-source-tag://AnalyticsSessionConfiguration">AnalyticsSessionConfiguration</a> information
/// used by the <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a>.
///
/// returns:
/// <a href="x-source-tag://AnalyticsSessionConfiguration">AnalyticsSessionConfiguration</a>
- (AnalyticsSessionConfiguration * _Nonnull)getAnalyticsSessionConfiguration SWIFT_WARN_UNUSED_RESULT;
/// Update analytics configuration.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param analyticsSessionConfiguration Configuration that collects information
/// about how to handle processed sessions for Mikros Analytics.
///
- (void)updateAnalyticsConfigurationWithAnalyticsSessionConfiguration:(AnalyticsSessionConfiguration * _Nonnull)analyticsSessionConfiguration;
@end


/// Interface for main entry point for Mikros Analytics session logging.
/// This public interface extends
/// <a href="x-source-tag://MikrosAnalyticsSessionConfigurationProperties">MikrosAnalyticsSessionConfigurationProperties</a>
SWIFT_PROTOCOL("_TtP20mikros_framework_ios28MikrosAnalyticsSessionLogger_")
@protocol MikrosAnalyticsSessionLogger <MikrosAnalyticsSessionConfigurationProperties>
/// Method used whenever a key, touch, or trackball event is dispatched to the activity.
- (void)onMotionEvent;
/// Method used to flush events in current queue. This will fire a one time task to
/// flush events.
- (void)flushSessionEvents;
@end


///
SWIFT_CLASS("_TtC20mikros_framework_ios15MikrosApiClient")
@interface MikrosApiClient : BaseApiClient
@end





@class UserMetadata;

SWIFT_PROTOCOL("_TtP20mikros_framework_ios23MikrosApiClientProtocol_")
@protocol MikrosApiClientProtocol <NSObject, MikrosAnalyticsEventLogger, MikrosAnalyticsSessionLogger>
///
/// returns:
/// <a href="x-source-tag://ClientConfiguration">ClientConfiguration</a> information
/// used by the <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a>
- (ClientConfiguration * _Nonnull)getClientConfiguration SWIFT_WARN_UNUSED_RESULT;
/// Update client configuration.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a>
/// is initialized.
/// \param clientConfiguration <a href="x-source-tag://ClientConfiguration">ClientConfiguration</a>
/// that collects information necessary to perform request operations.
///
- (void)updateClientConfigurationWithClientConfiguration:(ClientConfiguration * _Nonnull)clientConfiguration;
/// Update client configuration with new <a href="x-source-tag://apikey">apiKey</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param apiKey REQUIRED: Api key to perform necessary requests.
///
- (void)updateApiKeyWithApiKey:(NSString * _Nullable)apiKey;
/// Update client configuration with new <a href="x-source-tag://baseUrl">baseUrl</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param baseUrl REQUIRED: Base url to perform necessary requests.
///
- (void)updateBaseUrlWithBaseUrl:(NSString * _Nullable)baseUrl;
/// Update client configuration with new <a href="x-source-tag://appGameId">appGameId</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param appGameId REQUIRED: Issued unique identifier used to identify specific apps.
///
- (void)updateAppGameIdWithAppGameId:(NSString * _Nullable)appGameId;
/// Update client configuration with new <a href="x-source-tag://apiKeyType">apiKeyType</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param apiKeyType REQUIRED: Environment representation of apiKeys.
///
- (void)updateApiKeyTypeWithApiKeyType:(NSString * _Nullable)apiKeyType;
/// Update client configuration with new <a href="x-source-tag://deviceId">deviceId</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param deviceId REQUIRED: Device unique identifier.
///
- (void)updateDeviceIdWithDeviceId:(NSString * _Nullable)deviceId;
/// Update client configuration with new <a href="x-source-tag://appVersion">appVersion</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param appVersion REQUIRED: Versioning for app releases and updates.
///
- (void)updateAppVersionWithAppVersion:(NSString * _Nullable)appVersion;
/// Update client configuration with new <a href="x-source-tag://sdkVersion">sdkVersion</a> information.
/// The updated changes only apply if <a href="x-source-tag://MikrosApiClient">MikrosApiClient</a> is initialized.
/// \param sdkVersion REQUIRED: Versioning for Mikros SDK releases and updates.
///
- (void)updateSdkVersionWithSdkVersion:(NSString * _Nullable)sdkVersion;
/// Update user metadata(x-source-tag://updateUserMetadata) information.
/// \param userMetadata REQUIRED: User metadata object.
///
- (void)updateUserMetadataWithUserMetadata:(UserMetadata * _Nonnull)userMetadata;
@end


@interface MikrosApiClient (SWIFT_EXTENSION(mikros_framework_ios)) <MikrosApiClientProtocol>
- (ClientConfiguration * _Nonnull)getClientConfiguration SWIFT_WARN_UNUSED_RESULT;
- (void)updateClientConfigurationWithClientConfiguration:(ClientConfiguration * _Nonnull)clientConfiguration;
- (void)updateApiKeyWithApiKey:(NSString * _Nullable)apiKey;
- (void)updateBaseUrlWithBaseUrl:(NSString * _Nullable)baseUrl;
- (void)updateAppGameIdWithAppGameId:(NSString * _Nullable)appGameId;
- (void)updateApiKeyTypeWithApiKeyType:(NSString * _Nullable)apiKeyType;
- (void)updateDeviceIdWithDeviceId:(NSString * _Nullable)deviceId;
- (void)updateAppVersionWithAppVersion:(NSString * _Nullable)appVersion;
- (void)updateSdkVersionWithSdkVersion:(NSString * _Nullable)sdkVersion;
- (void)updateUserMetadataWithUserMetadata:(UserMetadata * _Nonnull)userMetadata;
- (void)logEvent:(MikrosEvent * _Nullable)event;
- (void)flushEvents;
- (void)updateEventLoggingWithIsEnabled:(BOOL)isEnabled;
- (void)updateMinimumQueueSizeWithMinimumQueueSize:(NSInteger)minimumQueueSize;
- (void)updateMaximumQueueSizeWithMaximumQueueSize:(NSInteger)maximumQueueSize;
- (void)updateRecurringTaskInMinutesWithRecurringTaskInMinutes:(int64_t)recurringTaskInMinutes;
- (AnalyticsEventConfiguration * _Nonnull)getAnalyticsConfiguration SWIFT_WARN_UNUSED_RESULT;
- (void)updateAnalyticsConfigurationWithAnalyticsConfiguration:(AnalyticsEventConfiguration * _Nonnull)analyticsConfiguration;
- (void)onMotionEvent;
- (void)flushSessionEvents;
- (void)updateSessionLoggingWithIsEnabled:(BOOL)isEnabled;
- (void)updateSessionTimeoutWithSessionTimeout:(NSInteger)sessionTimeout;
- (void)updateMinimumSessionLengthValidityWithMinimumSessionLengthValidity:(NSInteger)minimumSessionLengthValidity;
- (AnalyticsSessionConfiguration * _Nonnull)getAnalyticsSessionConfiguration SWIFT_WARN_UNUSED_RESULT;
- (void)updateAnalyticsConfigurationWithAnalyticsSessionConfiguration:(AnalyticsSessionConfiguration * _Nonnull)analyticsSessionConfiguration;
@end



SWIFT_CLASS("_TtC20mikros_framework_ios23MikrosApiClientProvider")
@interface MikrosApiClientProvider : NSObject
+ (BOOL)initializeWithClientConfiguration:(ClientConfiguration * _Nonnull)clientConfiguration analyticsEventConfiguration:(AnalyticsEventConfiguration * _Nullable)analyticsEventConfiguration analyticsSessionConfiguration:(AnalyticsSessionConfiguration * _Nullable)analyticsSessionConfiguration error:(NSError * _Nullable * _Nullable)error;
+ (id <MikrosApiClientProtocol> _Nullable)getInstanceAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




///
SWIFT_CLASS("_TtC20mikros_framework_ios11MikrosEvent")
@interface MikrosEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// Builder pattern is a creational design pattern. It means it solves problems
/// related to object creation.
/// Builder pattern is used to create instance of very complex object having telescoping
/// constructor in easiest way.
SWIFT_CLASS("_TtC20mikros_framework_ios18MikrosEventBuilder")
@interface MikrosEventBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Setter for event to track. Value should include the full request JSON string.
/// \param event JSON string of the event to send to Mikros Analytics.
///
///
/// returns:
/// <a href="x-source-tag://MikrosEventBuilder">MikrosEventBuilder</a>
- (MikrosEventBuilder * _Nonnull)setWithEvent:(NSString * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// Create the <a href="x-source-tag://MikrosEvent">MikrosEvent</a> object.
///
/// returns:
/// <a href="x-source-tag://MikrosEvent">MikrosEvent</a>
- (MikrosEvent * _Nullable)createAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSData;
@class NSURLSessionTask;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC20mikros_framework_ios16NetworkSpeedTest")
@interface NetworkSpeedTest : UIViewController <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


///
SWIFT_CLASS("_TtC20mikros_framework_ios12UserMetadata")
@interface UserMetadata : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// Builder pattern is a creational design pattern. It means it solves problems
/// related to object creation.
/// Builder pattern is used to create instance of very complex object having telescoping
/// constructor in easiest way.
SWIFT_CLASS("_TtC20mikros_framework_ios19UserMetadataBuilder")
@interface UserMetadataBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Setter for latitude.
/// \param event Set latitude.
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithLatitude:(NSString * _Nullable)latitude SWIFT_WARN_UNUSED_RESULT;
/// Setter for longitude.
/// \param longitude Set longitude
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithLongitude:(NSString * _Nullable)longitude SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceModel.
/// \param deviceModel Set deviceModel
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceModel:(NSString * _Nullable)deviceModel SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceOS.
/// \param deviceModel Set deviceOS
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceOS:(NSString * _Nullable)deviceOS SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceOSVersion.
/// \param deviceModel Set deviceOSVersion
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceOSVersion:(NSString * _Nullable)deviceOSVersion SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceScreenDpi.
/// \param deviceModel Set deviceScreenDpi
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceScreenDpi:(NSString * _Nullable)deviceScreenDpi SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceScreenHeight.
/// \param deviceModel Set deviceScreenHeight
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceScreenHeight:(NSString * _Nullable)deviceScreenHeight SWIFT_WARN_UNUSED_RESULT;
/// Setter for deviceScreenWidth.
/// \param deviceModel Set deviceScreenWidth
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithDeviceScreenWidth:(NSString * _Nullable)deviceScreenWidth SWIFT_WARN_UNUSED_RESULT;
/// Setter for sdkType.
/// \param deviceModel Set sdkType
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithSdkType:(NSString * _Nullable)sdkType SWIFT_WARN_UNUSED_RESULT;
/// Setter for isWifi.
/// \param deviceModel Set isWifi
///
///
/// returns:
/// <a href="x-source-tag://UserMetadataBuilder">UserMetadataBuilder</a>
- (UserMetadataBuilder * _Nonnull)setWithIsWifi:(NSString * _Nullable)isWifi SWIFT_WARN_UNUSED_RESULT;
/// Create the <a href="x-source-tag://UserMetadata">UserMetadata</a> object.
///
/// returns:
/// <a href="x-source-tag://UserMetadata">UserMetadata</a>
- (UserMetadata * _Nullable)createAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
