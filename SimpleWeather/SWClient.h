//
//  SWClient.h
//  SimpleWeather
//
//  Created by Deng Yanming on 14-5-27.
//  Copyright (c) 2014年 Deng Yanming. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
#import "ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h"

@interface SWClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
