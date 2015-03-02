# OptokAdLib-iOS

[![CI Status](http://img.shields.io/travis/Pawit Khid-arn/OptokAdLib-iOS.svg?style=flat)](https://travis-ci.org/Pawit Khid-arn/OptokAdLib-iOS)
[![Version](https://img.shields.io/cocoapods/v/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)
[![License](https://img.shields.io/cocoapods/l/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)
[![Platform](https://img.shields.io/cocoapods/p/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

### Dependencies

This library is dependent on AFNetworking.  Instructions on how to add this framework to your project can be found at https://github.com/AFNetworking/AFNetworking.  

## Installation

### Framework import

1. Clone the repository or download the zip file from Github
2. Drag OptokAdLib.Framework from the framework directory into your project

### Cocoapods

  Coming soon

## Usage

### Floating Ad

FLOATING AD DESCRIPTION

  OPTKFloatingAdViewController *floatingAd = [[OPTKFloatingAdViewController alloc] initWithUid:@"UID" andSpotId:@"SPOT_ID" withPosition:OPTKAdPositionBottom andHeight:50];
  [floatingAd presentAd:self];

### Expanding Ad

EXPANDING AD DESCRIPTION

  OPTKExpandingAdViewController *expandingAd = [[OPTKExpandingAdViewController alloc] initWithUid:@"UID" andSpotId:@"SPOT_ID" withPosition:OPTKAdPositionBottom andHeight:50];
  [expandingAd presentAd:self];

### Popup Ad

POPUP AD DESCRIPTION

  OPTKPopupAdViewController *popupAd = [[OPTKPopupAdViewController alloc] initWithUid:@"UID" andSpotId:@"SPOT_ID"];
  [popupAd presentAd:self];

### Flex Ad

FLEX AD DESCRIPTION

  OPTKFlexAdViewController *flexAd = [[OPTKFlexAdViewController alloc] initWithUid:@"UID" andSpotId:@"SPOT_ID" withFrame:CGRectMake(100, 100, 100, 100)];
  [flexAd presentAd:self];

## Author

OPTok Co. Ltd., Thailand

## License

OptokAdLib-iOS is available for use as is.  

