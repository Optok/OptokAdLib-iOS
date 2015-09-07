//
//  OPTKAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/16/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAd.h"

#define ISIPAD     UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad
#define ISIPHONE     UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone

#define USE_COLOR_BUTTONS false

@interface OPTKAdViewController : UIViewController<OPTKAdViewerDelegate>

@property(nonatomic,weak) UIView *delegate;
@property(nonatomic,strong) OPTKAd *ad;
@property(nonatomic,strong) UIView *mainAdView;
@property(nonatomic,strong) UIButton *linkButton;

- (void)presentAd:(UIViewController *)viewController;
- (void)updateMainAdViewWithView:(UIView *)view;
- (void)close;
- (void)showShareOptions;
- (void)endVideoCallback;
- (void)removeFromSuperview;
@end

