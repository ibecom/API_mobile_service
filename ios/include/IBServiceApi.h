//
//  ServiceApi.h
//  ServiceApi
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IBServiceManager.h"


@interface IBServiceApi : NSObject
+ (id<IBServiceManager>) manager;
+ (NSString*) version;
+ (void) release;
@end
