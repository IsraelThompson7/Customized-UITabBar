//
//  AppDelegate.h
//  TabBarController_LYS
//
//  Created by lys on 12-8-23.
//  Copyright (c) 2012年 lys. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FNMyCollectionViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (retain, nonatomic) FNMyCollectionViewController *myViewCtr;
@property (strong, nonatomic) UINavigationController *navController;
@end
