//
//  OPTKExpandingAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/22/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKExpandingAdViewController : OPTKAdViewController

@property(nonatomic,assign) enum OPTKAdPosition position;
@property(nonatomic,assign) CGFloat height;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position andHeight:(CGFloat)height;

@end
