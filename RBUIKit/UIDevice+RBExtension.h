//
//  UIDevice+RBExtension.h
//  Pods
//
//  Created by baxiang on 2017/9/27.
//

#import <UIKit/UIKit.h>

@interface UIDevice (RBExtension)

+ (nullable NSString *)wiFiIPAddress;
+ (nullable NSString *)cellIPAddress;
@end
