//
//  ViewController.h
//  BlocBrowser
//
//  Created by Mike Jewett on 6/26/15.
//  Copyright (c) 2015 Mike Jewett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */

- (void) resetWebView;
- (void) displayWelcomeMessage;

@end

