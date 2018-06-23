//
//  Analytics.h
//  Analytics
//
//  Created by Tony Xiao on 11/28/16.
//  Copyright © 2016 Segment. All rights reserved.
//

#import <UIKit/UIKit.h>
#define SERIALIZABLE_DICT NSDictionary<NSString *, id> *

//! Project version number for Analytics.
FOUNDATION_EXPORT double AnalyticsVersionNumber;

//! Project version string for Analytics.
FOUNDATION_EXPORT const unsigned char AnalyticsVersionString[];


@interface Analytics : NSObject

// - Initialization
+ (void)initWithLaunchOptions:(NSDictionary*)launchOptions appId:(NSString*)appId;
+ (void)identify:(NSString*)userId traits:(NSDictionary*)traits;

+ (void)track:(NSString *)event properties:(SERIALIZABLE_DICT _Nullable)properties options:(SERIALIZABLE_DICT _Nullable)options;
@end
