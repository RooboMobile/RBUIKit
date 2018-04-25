//
//  UIView+RBUIKit.h
//
//
//  Created by baxiang on 17/6/13.
//
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
/**
 *  对 view.frame 操作的简便封装，注意 view 与 view 之间互相计算时，需要保证处于同一个坐标系内。
 */
@interface UIView (RBUIKit)

/// 等价于 CGRectGetMinY(frame)
@property(nonatomic, assign) CGFloat top;

/// 等价于 CGRectGetMinX(frame)
@property(nonatomic, assign) CGFloat left;

/// 等价于 CGRectGetMaxY(frame)
@property(nonatomic, assign) CGFloat bottom;

/// 等价于 CGRectGetMaxX(frame)
@property(nonatomic, assign) CGFloat right;

/// 等价于 CGRectGetWidth(frame)
@property(nonatomic, assign) CGFloat width;

/// 等价于 CGRectGetHeight(frame)
@property(nonatomic, assign) CGFloat height;

// shortcuts for positions
@property (nonatomic) CGFloat centerX;

@property (nonatomic) CGFloat centerY;


@property (nullable, nonatomic, readonly) UIViewController *viewController;
- (void)removeAllSubviews;

- (UIImage *)snapshotImage;

- (UIImage *)snapshotImageAfterScreenUpdates:(BOOL)afterScreenUpdates;

@end
NS_ASSUME_NONNULL_END
