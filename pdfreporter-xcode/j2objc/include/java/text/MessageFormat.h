//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/MessageFormat.java
//

#ifndef _JavaTextMessageFormat_H_
#define _JavaTextMessageFormat_H_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaLangStringBuffer;
@class JavaTextAttributedCharacterIterator_Attribute;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilLocale;
@protocol JavaTextAttributedCharacterIterator;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/text/Format.h"

#define JavaTextMessageFormat_serialVersionUID 6479157306784022952LL

@interface JavaTextMessageFormat : JavaTextFormat {
}

- (instancetype)initWithNSString:(NSString *)template_
              withJavaUtilLocale:(JavaUtilLocale *)locale;

- (instancetype)initWithNSString:(NSString *)template_;

- (void)applyPatternWithNSString:(NSString *)template_;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

- (JavaLangStringBuffer *)formatWithNSObjectArray:(IOSObjectArray *)objects
                         withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                        withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)args;

- (IOSObjectArray *)getFormats;

- (IOSObjectArray *)getFormatsByArgumentIndex;

- (void)setFormatByArgumentIndexWithInt:(jint)argIndex
                     withJavaTextFormat:(JavaTextFormat *)format;

- (void)setFormatsByArgumentIndexWithJavaTextFormatArray:(IOSObjectArray *)formats;

- (JavaUtilLocale *)getLocale;

- (NSUInteger)hash;

- (IOSObjectArray *)parseWithNSString:(NSString *)string;

- (IOSObjectArray *)parseWithNSString:(NSString *)string
            withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (void)setFormatWithInt:(jint)offset
      withJavaTextFormat:(JavaTextFormat *)format;

- (void)setFormatsWithJavaTextFormatArray:(IOSObjectArray *)formats;

- (void)setLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)toPattern;

@end

FOUNDATION_EXPORT BOOL JavaTextMessageFormat_initialized;
J2OBJC_STATIC_INIT(JavaTextMessageFormat)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaTextMessageFormat_formatWithNSString_withNSObjectArray_(NSString *format, IOSObjectArray *args);

J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat, serialVersionUID, jlong)

FOUNDATION_EXPORT IOSObjectArray *JavaTextMessageFormat_serialPersistentFields_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat, serialPersistentFields_, IOSObjectArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat)

@interface JavaTextMessageFormat_FieldContainer : NSObject {
 @public
  jint start_, end_;
  JavaTextAttributedCharacterIterator_Attribute *attribute_;
  id value_;
}

- (instancetype)initWithInt:(jint)start
                    withInt:(jint)end
withJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute
                     withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextMessageFormat_FieldContainer)

J2OBJC_FIELD_SETTER(JavaTextMessageFormat_FieldContainer, attribute_, JavaTextAttributedCharacterIterator_Attribute *)
J2OBJC_FIELD_SETTER(JavaTextMessageFormat_FieldContainer, value_, id)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat_FieldContainer)

#define JavaTextMessageFormat_Field_serialVersionUID 7899943957617360810LL

@interface JavaTextMessageFormat_Field : JavaTextFormat_Field {
}

- (instancetype)initWithNSString:(NSString *)fieldName;

@end

FOUNDATION_EXPORT BOOL JavaTextMessageFormat_Field_initialized;
J2OBJC_STATIC_INIT(JavaTextMessageFormat_Field)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat_Field, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaTextMessageFormat_Field *JavaTextMessageFormat_Field_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat_Field, ARGUMENT_, JavaTextMessageFormat_Field *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat_Field)

#endif // _JavaTextMessageFormat_H_