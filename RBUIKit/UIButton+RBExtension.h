//
//  UIButton+BXExtension.h
//  Pods
//
//  Created by baxiang on 2017/6/13.
//
//

#import <UIKit/UIKit.h>

@interface UIButton (RBExtension)

/**
 *  设置Button的背景色
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

/**
 *  快捷设置图片
 */
- (void)setImage:(UIImage *)image imageHL:(UIImage *)imageHL;


-(void)startTime:(NSInteger )timeout title:(NSString *)tittle waitTittle:(NSString *)waitTittle;
@end
