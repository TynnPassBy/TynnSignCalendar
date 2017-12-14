//
//  AppDelegate.h
//  TynnSignCalendar
//
//  Created by 刘庆贺 on 2017/11/28.
//  Copyright © 2017年 huiranwangluo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

