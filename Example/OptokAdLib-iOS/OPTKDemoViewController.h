//
//  OPTKDemoViewController.h
//  OptokAdLib-iOS
//
//  Created by Pawit Khid-arn on 3/11/2558 BE.
//  Copyright (c) 2558 Pawit Khid-arn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OptokAdLib/OPTKAdViewController.h>

@interface OPTKDemoViewController : UIViewController

- (id)initForFloatingAd:(enum OPTKAdPosition)position;
- (id)initForExpandingAd:(enum OPTKAdPosition)position;
- (id)initForFlexAd:(CGRect)frame;
- (id)initForPopupAd;

@end
