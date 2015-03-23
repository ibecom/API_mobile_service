//
//  IBServiceConnectionDelegate.h
//  ibFinder3
//
//  Created on 16.09.14.
//  Copyright (c) 2014-2015 iBecom. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IBServiceConnection;

@protocol IBServiceConnectionDelegate <NSObject>
- (void) connection:(id<IBServiceConnection>)connection didFailWithError:(NSError*)error;
- (void) connection:(id<IBServiceConnection>)connection disconnectedWithError:(NSError*)error;
@end
