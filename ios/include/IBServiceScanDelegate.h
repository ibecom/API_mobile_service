//
//  IServiceBeaconDelegate.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IBServiceManager;
@protocol IBServiceBeacon;

typedef NS_ENUM(NSInteger, IBBluetoothProblem) {
    IBBluetoothProblemUnsupported = 0,
    IBBluetoothProblemUnauthorized
};

@protocol IBServiceScanDelegate <NSObject>
@required
- (void) serviceManager:(id<IBServiceManager>)manager didScanBeacon:(id<IBServiceBeacon>)beacon;
- (void) serviceManager:(id<IBServiceManager>)manager didLooseBeacon:(id<IBServiceBeacon>)beacon;
@optional
- (void) bluetoothProblem:(IBBluetoothProblem)problem;
@end
