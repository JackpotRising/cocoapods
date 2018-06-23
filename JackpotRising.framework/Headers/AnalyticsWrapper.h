//
//  AnalyticsWrapper.h
//  JackpotRising
//
//  Created by Prethush on 28/03/18.
//  Copyright © 2018 JackpotRising. All rights reserved.
//

#import <Foundation/Foundation.h>
#define SERIALIZABLE_DICT NSDictionary<NSString *, id> *

@interface AnalyticsWrapper : NSObject

+ (AnalyticsWrapper*)initialize;
+ (void)identify:(NSString*)userId traits:(NSDictionary*)traits;
+ (void)track:(NSString *)event properties:(SERIALIZABLE_DICT _Nullable)properties options:(SERIALIZABLE_DICT _Nullable)options;

@end
