//
//  UINavigationController+Smooth.h
//  CKTransition
//
//  Created by ck on 2017/5/31.
//  Copyright © 2017年 caike. All rights reserved.
//  导航栏平滑渐变 OC版

#import <UIKit/UIKit.h>

@interface UINavigationController (Smooth)

@end


@interface UIViewController (Smooth)


@property (nonatomic, assign) CGFloat navBarBgAlpha;

@property (nonatomic, strong) UIColor *navBarTintColor;

@end
