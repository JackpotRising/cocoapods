//
//  synchronousRequest.h
//  JackpotRising
//
//  Created by tibin on 26/04/17.
//  Copyright © 2017 Jackpot Rising Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SynchronousRequest : NSObject

+ (NSString*)sendSynchronousRequestWithUrl:(NSString*)url method:(NSString*)method parameters:(NSDictionary *)parameter headers:(NSDictionary*)header;

@end
