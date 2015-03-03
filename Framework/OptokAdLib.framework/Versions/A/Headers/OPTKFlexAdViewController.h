//
//  OPTKFlexAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/22/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKFlexAdViewController : OPTKAdViewController

@property(nonatomic,assign) CGRect frame;
@property(strong,nonatomic) UIButton *closeButton;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withFrame:(CGRect)frame;

@end
