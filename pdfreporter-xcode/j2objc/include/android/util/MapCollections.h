//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/MapCollections.java
//

#ifndef _AndroidUtilMapCollections_H_
#define _AndroidUtilMapCollections_H_

@class AndroidUtilMapCollections_EntrySet;
@class AndroidUtilMapCollections_KeySet;
@class AndroidUtilMapCollections_ValuesCollection;
@class IOSObjectArray;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"
#include "java/util/Set.h"

@interface AndroidUtilMapCollections : NSObject {
 @public
  AndroidUtilMapCollections_EntrySet *mEntrySet_;
  AndroidUtilMapCollections_KeySet *mKeySet_;
  AndroidUtilMapCollections_ValuesCollection *mValues_;
}

+ (jboolean)containsAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                      withJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (jboolean)removeAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                    withJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (jboolean)retainAllHelperWithJavaUtilMap:(id<JavaUtilMap>)map
                    withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (IOSObjectArray *)toArrayHelperWithInt:(jint)offset;

- (IOSObjectArray *)toArrayHelperWithNSObjectArray:(IOSObjectArray *)array
                                           withInt:(jint)offset;

+ (jboolean)equalsSetHelperWithJavaUtilSet:(id<JavaUtilSet>)set
                                    withId:(id)object;

- (id<JavaUtilSet>)getEntrySet;

- (id<JavaUtilSet>)getKeySet;

- (id<JavaUtilCollection>)getValues;

- (jint)colGetSize;

- (id)colGetEntryWithInt:(jint)index
                 withInt:(jint)offset;

- (jint)colIndexOfKeyWithId:(id)key;

- (jint)colIndexOfValueWithId:(id)key;

- (id<JavaUtilMap>)colGetMap;

- (void)colPutWithId:(id)key
              withId:(id)value;

- (id)colSetValueWithInt:(jint)index
                  withId:(id)value;

- (void)colRemoveAtWithInt:(jint)index;

- (void)colClear;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections)

J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mEntrySet_, AndroidUtilMapCollections_EntrySet *)
J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mKeySet_, AndroidUtilMapCollections_KeySet *)
J2OBJC_FIELD_SETTER(AndroidUtilMapCollections, mValues_, AndroidUtilMapCollections_ValuesCollection *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_containsAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_removeAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_retainAllHelperWithJavaUtilMap_withJavaUtilCollection_(id<JavaUtilMap> map, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT jboolean AndroidUtilMapCollections_equalsSetHelperWithJavaUtilSet_withId_(id<JavaUtilSet> set, id object);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections)

@interface AndroidUtilMapCollections_ArrayIterator : NSObject < JavaUtilIterator > {
 @public
  jint mOffset_;
  jint mSize_;
  jint mIndex_;
  jboolean mCanRemove_;
}

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$
                                          withInt:(jint)offset;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_ArrayIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_ArrayIterator)

@interface AndroidUtilMapCollections_MapIterator : NSObject < JavaUtilIterator, JavaUtilMap_Entry > {
 @public
  jint mEnd_;
  jint mIndex_;
  jboolean mEntryValid_;
}

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (void)remove;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)object;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_MapIterator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_MapIterator)

@interface AndroidUtilMapCollections_EntrySet : NSObject < JavaUtilSet > {
}

- (jboolean)addWithId:(id<JavaUtilMap_Entry>)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_EntrySet)

@interface AndroidUtilMapCollections_KeySet : NSObject < JavaUtilSet > {
}

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_KeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_KeySet)

@interface AndroidUtilMapCollections_ValuesCollection : NSObject < JavaUtilCollection > {
}

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (instancetype)initWithAndroidUtilMapCollections:(AndroidUtilMapCollections *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilMapCollections_ValuesCollection)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilMapCollections_ValuesCollection)

#endif // _AndroidUtilMapCollections_H_