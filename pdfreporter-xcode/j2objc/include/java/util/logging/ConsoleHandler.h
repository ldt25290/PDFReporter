//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/ConsoleHandler.java
//

#ifndef _JavaUtilLoggingConsoleHandler_H_
#define _JavaUtilLoggingConsoleHandler_H_

@class JavaUtilLoggingLogRecord;

#include "J2ObjC_header.h"
#include "java/util/logging/StreamHandler.h"

@interface JavaUtilLoggingConsoleHandler : JavaUtilLoggingStreamHandler {
}

- (instancetype)init;

- (void)close;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingConsoleHandler)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingConsoleHandler)

#endif // _JavaUtilLoggingConsoleHandler_H_
