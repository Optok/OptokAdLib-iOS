# OptokAdLib-iOS

[![CI Status](http://img.shields.io/travis/Pawit Khid-arn/OptokAdLib-iOS.svg?style=flat)](https://travis-ci.org/Pawit Khid-arn/OptokAdLib-iOS)
[![Version](https://img.shields.io/cocoapods/v/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)
[![License](https://img.shields.io/cocoapods/l/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)
[![Platform](https://img.shields.io/cocoapods/p/OptokAdLib-iOS.svg?style=flat)](http://cocoadocs.org/docsets/OptokAdLib-iOS)

## Usage

To run the example project, clone the repo, and open OptokAdLib-iOS.xcworkspace from the Example directory.

## Requirements

### Dependencies

This library is dependent on AFNetworking.  Instructions on how to add this framework to your project can be found at https://github.com/AFNetworking/AFNetworking.  

## Installation

### Framework import

1. Clone the repository or download the zip file from Github
2. Drag OptokAdLib.Framework and OptokAd.bundle from the framework directory into your project

### Cocoapods

  Coming soon

## Usage

### Floating Ad

Stationary video/banner attached to either the top or bottom of the screen.  Size is 320x55 pixels.

```
OPTKFloatingAdViewController *floatingAd = [[OPTKFloatingAdViewController alloc] initWithSlotName:@"SPOT_ID" withPosition:OPTKAdPositionBottom];
[floatingAd presentAd:self];
```

### Expanding Ad

Stationary video/banner attached to either the top or bottom of the screen.  Size is 320x55 pixels. When clicked, detailed view will be displayed, pushed as a new view controller (iPhone) or modal (iPad).

```
OPTKExpandingAdViewController *expandingAd = [[OPTKExpandingAdViewController alloc] initWithSlotName:@"SPOT_ID" withPosition:OPTKAdPositionTop];
[expandingAd presentAd:self];
```

#### Customizing detail view

  Coming soon

### Popup Ad

A modal view of the ad at a fixed position and dimension.  Buttons provided to expand the video to full screen or view details.

```
OPTKPopupAdViewController *popupAd = [[OPTKPopupAdViewController alloc] initWithSlotName:@"SPOT_ID"];
[popupAd presentAd:self];
```

## Flex Ad

A modal view of the ad, placed anywhere in the view by defining a frame.

```
OPTKFlexAdViewController *flexAd = [[OPTKFlexAdViewController alloc] initWithSlotName:@"SPOT_ID" withFrame:CGRectMake(100, 100, 100, 100)];
[flexAd presentAd:self];
```

## Author

OPTok Co. Ltd., Thailand

## License

OptokAdLib-iOS is available for use as is.  

