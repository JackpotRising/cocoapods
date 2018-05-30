//
//  JRMixpanelWrapper.h
//  JackpotRising
//
//  Created by tibin on 09/05/18.
//  Copyright © 2018 JackpotRising. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JRMixpanelWrapper : NSObject
+ (JRMixpanelWrapper*)initialize;
+ (void)trackEvent:(NSString *)event;
@end
