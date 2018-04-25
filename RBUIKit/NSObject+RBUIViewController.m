//
//  NSObject+RBUIViewController.m
//  Pods
//
//  Created by baxiang on 2017/9/27.
//

#import "NSObject+RBUIViewController.h"

@implementation NSObject (RBUIViewController)

- (UIViewController *)currentTopViewController
{
    UIViewController *vc = [UIApplication sharedApplication].keyWindow.rootViewController;
    // modal
    if (vc.presentedViewController) {
        if ([vc.presentedViewController isKindOfClass:[UINavigationController class]]) {
            UINavigationController *navVc = (UINavigationController *)vc.presentedViewController;
            vc = navVc.visibleViewController;
        }
        else if ([vc.presentedViewController isKindOfClass:[UITabBarController class]]){
            UITabBarController *tabVc = (UITabBarController *)vc.presentedViewController;
            if ([tabVc.selectedViewController isKindOfClass:[UINavigationController class]]) {
                UINavigationController *navVc = (UINavigationController *)tabVc.selectedViewController;
                return navVc.visibleViewController;
            }
            else{
                return tabVc.selectedViewController;
            }
        }
        else{
            vc = vc.presentedViewController;
        }
    }
    // push
    else{
        if ([vc isKindOfClass:[UITabBarController class]]) {
            UITabBarController *tabVc = (UITabBarController *)vc;
            if ([tabVc.selectedViewController isKindOfClass:[UINavigationController class]]) {
                UINavigationController *navVc = (UINavigationController *)tabVc.selectedViewController;
                return navVc.visibleViewController;
            }
            else{
                return tabVc.selectedViewController;
            }
        }
        else if([vc isKindOfClass:[UINavigationController class]]){
            UINavigationController *navVc = (UINavigationController *)vc;
            vc = navVc.visibleViewController;
        }
    }
    return vc;
}

@end
