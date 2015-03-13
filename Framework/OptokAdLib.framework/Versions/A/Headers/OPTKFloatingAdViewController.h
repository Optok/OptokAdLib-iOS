//
//  OPTKFloatingAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/16/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKFloatingAdViewController : OPTKAdViewController

@property(assign) CGFloat height;
@property(assign) enum OPTKAdPosition position;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position andHeight:(CGFloat)height;
- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position;

@end
