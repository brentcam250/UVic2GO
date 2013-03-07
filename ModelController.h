//
//  ModelController.h
//  UVic2GO
//
//  Created by Brent Cameron on 2013-01-29.
//  Copyright (c) 2013 Brent Cameron. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
