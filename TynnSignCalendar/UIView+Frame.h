//
//  UIView+Frame.h
//  HCSystemicQRCodeDemo
//
//  Created by Caoyq on 16/5/4.
//  Copyright © 2016年 honeycao. All rights reserved.
//

#import <UIKit/UIKit.h>

//获取当前设备的尺寸
#define kScreenWidth   [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight  [[UIScreen mainScreen] bounds].size.height

#define themeColor  [UIColor colorWithRed:235/255.0f green:91/255.0f blue:87/255.0f alpha:1]

#define IPHONE4       [[UIScreen mainScreen] bounds].size.height == 480.0
#define IPHONE5       [[UIScreen mainScreen] bounds].size.height == 568.0
#define IPHONE6       [[UIScreen mainScreen] bounds].size.height == 667.0
#define IPHONE6PLUS   [[UIScreen mainScreen] bounds].size.height == 736.0

//以iphone5为基础 坐标都以iphone5为基准 进行代码的适配
#define ratio         [[UIScreen mainScreen] bounds].size.width/320.0

//设置图片
#define ImgName(imagename) [UIImage imageNamed:imagename]

@interface UIView (Frame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@end
