//
//  JackpotRising.h
//  JackpotRising
//
//  Created by Ankit Tayde on 3/11/15.
//  Copyright (c) 2015 Ankit Tayde. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for JackpotRising.
FOUNDATION_EXPORT double JackpotRisingVersionNumber;

//! Project version string for JackpotRising.
FOUNDATION_EXPORT const unsigned char JackpotRisingVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JackpotRising/PublicHeader.h>

/**
 *  JackpotRising delegate methods
 */
@protocol JackpotRisingDelegate <NSObject>

@required
/**
 *  Callback method when a user starts a contest
 *
 *  @param extraData details about a contest
 */
- (void) startGamePlayWithData:(NSDictionary *)extraData;
/**
 *  Callback method when geo location fetching is done
 *
 *  @param locationAllowed location fetch status
 */
- (void) jrLocationStatus:(BOOL)locationAllowed;

@optional
/**
 *  Callback method when SDK initial popup is cancelled
 */
- (void) sdkPopupCancelled;

@end

/**
 *  JackpotRising class
 */
@interface JackpotRising : NSObject

@property (nonatomic, weak) id<JackpotRisingDelegate> jrDelegate;

/**
 *  Returns shared instance of JackpotRising class
 *
 *  @return shared instance
 */
+ (JackpotRising*)getInstance;

/**
 *  Initialize method to be called first
 *
 *  @param apiKey   JackpotRising Developer API key
 *  @param isProd   SDK mode. True for Production. False for staging
 *  @param delegate delegate variable
 */
+ (void)initSdkWith:(NSString*)apiKey
            AndMode:(BOOL)isProd
        AndDelegate:(id<JackpotRisingDelegate>) delegate;

/**
 *  Returns status whether contest is running
 *
 *  @return status
 */
+ (BOOL) isJrGamePlay;

/**
 *  Submit score of contest after game play
 *
 *  @param score Score integer variable
 */
- (void) submitScore:(long)score;

/**
 *  Returns status of Location fetching
 *
 *  @return status
 */
- (BOOL) isLocationAllowed;

/**
 *  Returns the mode of SDK.
 *
 *  @return mode of SDK
 */
-(NSString *) getMode;

/**
 *  Show JackpotRising window
 */
- (void)showAlertForJr;

/**
 *  point SDK to staging URL
 */
- (void)setSDKToStaging:(BOOL)status;

/**
 *  Returns status whether SDK is staging or production.
 *
 *  @return Boolean value
 */
- (BOOL)isSDKStaging;

@end

