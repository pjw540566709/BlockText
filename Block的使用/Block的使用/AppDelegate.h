//
//  AppDelegate.h
//  Block的使用
//
//  Created by jiawei on 14-9-11.
//  Copyright (c) 2014年 eliteworkltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstViewController.h"
#import "SecondViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    FirstViewController *viewController;
    SecondViewController *secondViewController;
}

@property (strong, nonatomic) UIWindow *window;

@end
