//
//  RootViewController.h
//  UVic2GO
//
//  Created by Brent Cameron on 2013-01-29.
//  Copyright (c) 2013 Brent Cameron. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
