//
//  Source/Headers/SpringBoard/SBApplicationInfo.h
//
//  Created by inoahdev on 12/25/16
//  Copyright © 2016 - 2017 inoahdev. All rights reserved.
//

#ifndef SPRINGBOARD_SBAPPLICATIONINFO_H
#define SPRINGBOARD_SBAPPLICATIONINFO_H

#import <CoreFoundation/CoreFoundation.h>

@interface SBApplicationInfo : NSObject
@property (nonatomic) BOOL systemApplication;
@property (nonatomic, strong) NSString *bundleIdentifier;
@end

#endif
