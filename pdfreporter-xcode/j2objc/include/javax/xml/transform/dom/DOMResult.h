//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/dom/DOMResult.java
//

#ifndef _JavaxXmlTransformDomDOMResult_H_
#define _JavaxXmlTransformDomDOMResult_H_

@protocol OrgW3cDomNode;

#include "J2ObjC_header.h"
#include "javax/xml/transform/Result.h"

@interface JavaxXmlTransformDomDOMResult : NSObject < JavaxXmlTransformResult > {
}

- (instancetype)init;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                         withNSString:(NSString *)systemId;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling
                         withNSString:(NSString *)systemId;

- (void)setNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (id<OrgW3cDomNode>)getNode;

- (void)setNextSiblingWithOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling;

- (id<OrgW3cDomNode>)getNextSibling;

- (void)setSystemIdWithNSString:(NSString *)systemId;

- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformDomDOMResult)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaxXmlTransformDomDOMResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformDomDOMResult, FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformDomDOMResult)

#endif // _JavaxXmlTransformDomDOMResult_H_