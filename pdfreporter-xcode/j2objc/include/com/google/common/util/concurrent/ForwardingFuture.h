//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ForwardingFuture.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentForwardingFuture_) && (ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingFuture_

@class JavaUtilConcurrentTimeUnitEnum;

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilConcurrentFuture_RESTRICT 1
#define JavaUtilConcurrentFuture_INCLUDE 1
#include "java/util/concurrent/Future.h"


@interface ComGoogleCommonUtilConcurrentForwardingFuture : ComGoogleCommonCollectForwardingObject < JavaUtilConcurrentFuture > {
}

- (instancetype)init;

- (id<JavaUtilConcurrentFuture>)delegate;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (jboolean)isCancelled;

- (jboolean)isDone;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingFuture)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingFuture)
#if !defined (_ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_) && (ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture_

@protocol JavaUtilConcurrentFuture;


@interface ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture : ComGoogleCommonUtilConcurrentForwardingFuture {
}

- (instancetype)initWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)delegate;

- (id<JavaUtilConcurrentFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingFuture_SimpleForwardingFuture)
