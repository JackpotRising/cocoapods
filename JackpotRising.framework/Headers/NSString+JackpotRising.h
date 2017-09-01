//
//  NSString+JackpotRising.h
//  JackpotRising
//
//  Created by Prethush on 08/08/16.
//  Copyright © 2016 Jackpot Rising Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 Objc extension for SHA and MD5 hash
 */
@interface NSString (JackpotRising)
- (NSString*)mD5Hash;
@end

/**
 Class to load and register custom font to SDK
 */
@interface CustomFont : NSObject
/**
 class method that register the custom font to SDK

 @param fontName desired font name
 */
+ (void)loadCustomFont:(NSString*)fontName;
@end
