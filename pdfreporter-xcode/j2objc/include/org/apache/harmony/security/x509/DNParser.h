//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/DNParser.java
//

#ifndef _OrgApacheHarmonySecurityX509DNParser_H_
#define _OrgApacheHarmonySecurityX509DNParser_H_

@class IOSByteArray;
@class IOSCharArray;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@interface OrgApacheHarmonySecurityX509DNParser : NSObject {
}

- (instancetype)initWithNSString:(NSString *)dn;

- (jchar)getUTF8;

- (id<JavaUtilList>)parse;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX509DNParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509DNParser)

#endif // _OrgApacheHarmonySecurityX509DNParser_H_