//
//  IBeaconManager.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IBServiceBeacon.h"
#import "IBServiceScanDelegate.h"

@protocol IBServiceManager <NSObject>
- (void) discoverBeacons;
- (void) stopDiscovery;
@property(readonly) NSArray* beacons;
@property(readonly) bool discovering;
@property(weak, nonatomic) id<IBServiceScanDelegate> delegate;
@end
