//
//  AppDataTracker.h
//
//
//  Created by Prethush on 29/03/16.
//  Copyright © 2016 Jackpot Rising Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface AppDataTracker : NSObject

+ (AppDataTracker*)sharedInstance;
- (void)initWithMixpanelToken:(NSString*)token;
- (void)trackEventWithName:(NSString*)name
             andProperties:(NSDictionary*)properties;
- (void)incrementField:(NSString*)name byValue:(NSNumber*)value;
- (void)setClientID:(NSString*)clientId;
- (void)setUserAnonymous:(BOOL)status;
- (void)setProfileEmail:(NSString*)email withUsername:(NSString*)username;
- (void)createAlias:(NSString*)alias;
- (void)trackEventWithName:(NSString*)name;
- (void)resetUser;
- (void)saveAccountBalance:(float)balance;

@end
