//
//  OPTKDemoViewController.m
//  OptokAdLib-iOS
//
//  Created by Pawit Khid-arn on 3/11/2558 BE.
//  Copyright (c) 2558 Pawit Khid-arn. All rights reserved.
//

#import "OPTKDemoViewController.h"
#import <OptokAdLib/OPTKFlexAdViewController.h>
#import <OptokAdLib/OPTKExpandingAdViewController.h>
#import <OptokAdLib/OPTKFloatingAdViewController.h>
#import <OptokAdLib/OPTKPopupAdViewController.h>

@interface OPTKDemoViewController () {
    NSString *_spotId;
    int _adType;
    enum OPTKAdPosition _position;
    CGRect _frame;
    OPTKAdViewController *_adViewController;
}

@end

@implementation OPTKDemoViewController

- (id)initForFloatingAd:(enum OPTKAdPosition)position
{
    if (self = [super init]) {
        _spotId = @"OPT_VIDEO_AD_BANNER";
        _adType = 0;
        _position = position;
    }
    return self;
}

- (id)initForExpandingAd:(enum OPTKAdPosition)position
{
    if (self = [super init]) {
        _spotId = @"OPT_VIDEO_AD_EXPAND";
        _adType = 1;
        _position = position;
    }
    return self;
}

- (id)initForFlexAd:(CGRect)frame
{
    if (self = [super init]) {
        _spotId = @"OPTOK_VIDEO_BANNER_L";
        _adType = 2;
        _frame = frame;
    }
    return self;
}

- (id)initForPopupAd
{
    if (self = [super init]) {
        _spotId = @"OPT_VIDEO_AD_POPUP";
        _adType = 3;
    }
    return self;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    if ([self respondsToSelector:@selector(edgesForExtendedLayout)]) {
        self.edgesForExtendedLayout = UIRectEdgeNone;
    }

    switch (_adType) {
        case 0:
            _adViewController = [[OPTKFloatingAdViewController alloc] initWithSlotName:_spotId withPosition:_position];
            break;
        case 1:
            _adViewController = [[OPTKExpandingAdViewController alloc] initWithSlotName:_spotId withPosition:_position];
            break;
        case 2:
            _adViewController = [[OPTKFlexAdViewController alloc] initWithSlotName:_spotId withFrame:_frame];
            break;
        case 3:
            _adViewController = [[OPTKPopupAdViewController alloc] initWithSlotName:_spotId];
            break;
        default:
            _adViewController = [[OPTKAdViewController alloc] init];
            break;
    }
    
    [_adViewController presentAd:self];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
