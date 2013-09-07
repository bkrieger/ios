//
//  HappABModel.h
//  Happ
//
//  Created by Brandon Krieger on 9/6/13.
//  Copyright (c) 2013 Happ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HappABModel : NSObject

- (NSString *)getUrlFromContacts:(NSString *)prefix
                       separator:(NSString *)separator;

- (NSString *)getNameForPhoneNumber:(NSString *)phoneNumber;
@end
