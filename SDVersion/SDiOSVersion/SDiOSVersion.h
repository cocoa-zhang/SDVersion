//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,

    iPhone4               = 2,
    iPhone4S              = 3,
    iPhone5               = 4,
    iPhone5C              = 5,
    iPhone5S              = 6,
    iPhone6               = 7,
    iPhone6Plus           = 8,
    iPhone6S              = 9,
    iPhone6SPlus          = 10,
    iPhone7               = 11,
    iPhone7Plus           = 12,
    iPhone8               = 13,
    iPhone8Plus           = 14,
    iPhoneX               = 15,
    iPhoneSE              = 16,
    iPhoneXS              = 17,
    iPhoneXR              = 18,
    iPhoneXSMax           = 19,
    iPhone11              = 20,
    iPhone11Pro           = 21,
    iPhone11ProMax        = 22,
    iPhoneSE2Gen          = 23,
    iPhone12              = 24,
    iPhone12Mini          = 25,
    iPhone12Pro           = 26,
    iPhone12ProMax        = 27,

    iPad1                 = 28,
    iPad2                 = 29,
    iPadMini              = 30,
    iPad3                 = 31,
    iPad4                 = 32,
    iPadAir               = 33,
    iPadMini2             = 34,
    iPadAir2              = 35,
    iPadMini3             = 36,
    iPadMini4             = 37,
    iPadPro12Dot9Inch     = 38,
    iPadPro9Dot7Inch      = 39,
    iPad5                 = 40,
    iPadPro12Dot9Inch2Gen = 41,
    iPadPro10Dot5Inch     = 42,
    iPad6                 = 43,
    iPad7                 = 44,
    iPadAir3              = 45,
    iPadMini5             = 46,
    iPadPro11Inch         = 47,
    iPadPro12Dot9Inch3Gen = 48,

    iPodTouch1Gen         = 49,
    iPodTouch2Gen         = 50,
    iPodTouch3Gen         = 51,
    iPodTouch4Gen         = 52,
    iPodTouch5Gen         = 53,
    iPodTouch6Gen         = 54
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot4inch = 4, // iPhone12 mini
    Screen5Dot5inch = 5,
    Screen5Dot8inch = 6,
    Screen6Dot1inch = 7,
    Screen6Dot5inch = 8,
    Screen6Dot7inch = 9
};

@interface SDiOSVersion : NSObject

+ (DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end
