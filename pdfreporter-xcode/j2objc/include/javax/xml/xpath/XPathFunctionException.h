//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathFunctionException.java
//

#ifndef _JavaxXmlXpathXPathFunctionException_H_
#define _JavaxXmlXpathXPathFunctionException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "javax/xml/xpath/XPathExpressionException.h"

#define JavaxXmlXpathXPathFunctionException_serialVersionUID -1837080260374986980LL

@interface JavaxXmlXpathXPathFunctionException : JavaxXmlXpathXPathExpressionException {
}

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathFunctionException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaxXmlXpathXPathFunctionException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFunctionException)

#endif // _JavaxXmlXpathXPathFunctionException_H_