//
//  IServiceBeaconConnection.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IBServiceParameters.h"
#import "IBServiceConnectionDelegate.h"

@protocol IBServiceConnection <NSObject>
- (void) disconnect:(void(^)(NSError* error))errorBlock;
- (void) requestReboot:(void(^)(NSError* error))errorBlock;
@property (weak, nonatomic) id<IBServiceConnectionDelegate> delegate;

//iBecom Service
@property (readonly, nonatomic) id<IBServiceUUIDParameter> proximityUUID;
@property (readonly, nonatomic) id<IBServiceNumericParameter> major;
@property (readonly, nonatomic) id<IBServiceNumericParameter> minor;
@property (readonly, nonatomic) id<IBServiceNumericParameter> accuracyAdjust;
@property (readonly, nonatomic) id<IBServiceNumericParameter> powerLevel;
@property (readonly, nonatomic) id<IBServiceWriteOnlyStringParameter> pairingPassword;
@property (readonly, nonatomic) id<IBServiceNumericParameter> broadcastingCycle;

//Device Information
@property (readonly, nonatomic) id<IBServiceReadOnlyStringParameter> manufacturerName;
@property (readonly, nonatomic) id<IBServiceReadOnlyStringParameter> firmwareRevision;
@property (readonly, nonatomic) id<IBServiceReadOnlyStringParameter> hardwareRevision;

//Battery
@property (readonly, nonatomic) id<IBServiceReadOnlyNumericParameter> batteryLevel;

@end
