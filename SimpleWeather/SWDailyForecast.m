//
//  SWDailyForecast.m
//  SimpleWeather
//
//  Created by Deng Yanming on 14-5-27.
//  Copyright (c) 2014年 Deng Yanming. All rights reserved.
//

#import "SWDailyForecast.h"

@implementation SWDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    return paths;
}

@end
