//
//  AppDelegate.h
//  TGDR
//
//  Created by Linn Zhao on 12-3-6.
//  Copyright AlphaStudio 2012年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
