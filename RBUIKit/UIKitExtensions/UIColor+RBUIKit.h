//
//  UIColor+BXExtension.h
//  Pods
//
//  Created by baxiang on 2017/6/13.
//
//

#import <UIKit/UIKit.h>

@interface UIColor (RBUIKit)

@property (nonatomic, readonly) CGFloat red;//获取当前UIColor对象里的红色色值

@property (nonatomic, readonly) CGFloat green;

@property (nonatomic, readonly) CGFloat blue;

@property (nonatomic, readonly) CGFloat hue;//获取当前UIColor对象里的hue（色相）

@property (nonatomic, readonly) CGFloat saturation;//获取当前UIColor对象里的saturation（饱和度）

@property (nonatomic, readonly) CGFloat brightness;//获取当前UIColor对象里的saturation（饱和度）

@property (nonatomic, readonly) CGFloat alpha;

+ (UIColor *)colorWithHex:(UInt32)hex;
+ (UIColor *)colorWithHex:(UInt32)hex andAlpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexString:(NSString *)hexString;
- (NSString *)hexString;

+ (UIColor *)colorWithWholeRed:(CGFloat)red
                         green:(CGFloat)green
                          blue:(CGFloat)blue
                         alpha:(CGFloat)alpha;

+ (UIColor *)colorWithWholeRed:(CGFloat)red
                         green:(CGFloat)green
                          blue:(CGFloat)blue;

+ (UIColor *)systemTintColor;

+ (UIColor *)randomColor;
@end
