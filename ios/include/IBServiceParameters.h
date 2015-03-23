//
//  IBServiceParameters.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol IBServiceConnection;

@protocol IBServiceParameter <NSObject>
@property NSString* name;
- (void) read:(void(^)(id))valueBlock error:(void(^)(NSError* error))errorBlock;
- (void) write:(id)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceReadOnlyParameter <NSObject>
@property NSString* name;
- (void) read:(void(^)(id))valueBlock error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceWriteOnlyParameter <NSObject>
@property NSString* name;
- (void) write:(id)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceReadOnlyNumericParameter <IBServiceReadOnlyParameter>
- (void) read:(void(^)(NSNumber*))valueBlock error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceWriteOnlyNumericParameter <IBServiceWriteOnlyParameter>
- (void) write:(NSNumber*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceNumericParameter <IBServiceParameter, IBServiceReadOnlyNumericParameter, IBServiceWriteOnlyNumericParameter>
- (void) read:(void(^)(NSNumber*))valueBlock error:(void(^)(NSError* error))errorBlock;
- (void) write:(NSNumber*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceUUIDParameter <IBServiceParameter>
- (void) read:(void(^)(NSUUID*))valueBlock error:(void(^)(NSError* error))errorBlock;
- (void) write:(NSUUID*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceReadOnlyStringParameter <IBServiceReadOnlyParameter>
- (void) read:(void(^)(NSString*))valueBlock error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceWriteOnlyStringParameter <IBServiceWriteOnlyParameter>
- (void) write:(NSString*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceStringParameter <IBServiceParameter, IBServiceReadOnlyStringParameter, IBServiceWriteOnlyStringParameter>
- (void) read:(void(^)(NSString*))valueBlock error:(void(^)(NSError* error))errorBlock;
- (void) write:(NSString*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceReadOnlyBlobParameter <IBServiceReadOnlyParameter>
- (void) read:(void(^)(NSData*))valueBlock error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceWriteOnlyBlobParameter <IBServiceWriteOnlyParameter>
- (void) write:(NSData*)value error:(void(^)(NSError* error))errorBlock;
@end

@protocol IBServiceBlobParameter <IBServiceParameter, IBServiceReadOnlyBlobParameter, IBServiceWriteOnlyBlobParameter>
- (void) read:(void(^)(NSData*))valueBlock error:(void(^)(NSError* error))errorBlock;
- (void) write:(NSData*)value error:(void(^)(NSError* error))errorBlock;
@end
