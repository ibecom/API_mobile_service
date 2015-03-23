//
//  IServiceBeacon.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IBServiceConnection.h"
#import "IBServiceScanDelegate.h"
#import "IBFirmwareUpdater.h"

@protocol IBServiceBeacon <NSObject>
@property (readonly) NSString* identifier;
@property (readonly) NSString* appleIdentifier;
@property (readonly) BOOL ibecomService;
@property (readonly) NSString* service;
@property (readonly) NSString* name;
@property (readonly) NSNumber* rssi;
@property (readonly) NSNumber* measuredPower;
@property (readonly) NSNumber* calculatedDistance;
@property (readonly) NSNumber* batteryLevel;
@property (readonly) NSDictionary* advertisementData;
@property (readonly) NSData* data;
@property (readonly) bool available;
@property id<IBServiceScanDelegate> delegate;

- (void) connect:(void(^)(id<IBServiceConnection> connection))connectBlock error:(void(^)(NSError* error))errorBlock;
- (void) connectForUpdate:(void(^)(id<IBFirmwareUpdater> updater))updateBlock error:(void(^)(NSError* error))errorBlock;
- (void) disconnect;

@end
