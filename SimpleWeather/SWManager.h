//
//  SWManager.h
//  SimpleWeather
//
//  Created by Deng Yanming on 14-5-27.
//  Copyright (c) 2014年 Deng Yanming. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import "SWCondition.h"

@interface SWManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) SWCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

+ (instancetype)sharedManager;

- (void)findCurrentLocation;

@end