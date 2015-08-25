//
//  MenuTableViewController.m
//  OptokAdLib-iOS
//
//  Created by Pawit Khid-arn on 3/11/2558 BE.
//  Copyright (c) 2558 Pawit Khid-arn. All rights reserved.
//

#import "OPTKMenuTableViewController.h"
#import "OPTKDemoViewController.h"

@interface OPTKMenuTableViewController () {
    NSMutableArray *_itemsArray;
}

@end

@implementation OPTKMenuTableViewController

- (id)initWithMenuItems
{
    if (self = [super init]) {
        _itemsArray = [[NSMutableArray alloc] init];
        [_itemsArray addObject:@"Floating Ad Top"];
        [_itemsArray addObject:@"Floating Ad Bottom"];
        [_itemsArray addObject:@"Expand Ad Bottom"];
        [_itemsArray addObject:@"Expand Ad Top"];
        [_itemsArray addObject:@"Flex Ad"];
        [_itemsArray addObject:@"Popup Ad"];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [_itemsArray count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] init];
    }
    
    [cell.textLabel setText:[_itemsArray objectAtIndex:indexPath.row]];
    
    return cell;
}

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    OPTKDemoViewController *demoView;
    
    switch (indexPath.row) {
        case 0:
            demoView = [[OPTKDemoViewController alloc] initForFloatingAd:OPTKAdPositionTop];
            break;
        case 1:
            demoView = [[OPTKDemoViewController alloc] initForFloatingAd:OPTKAdPositionBottom];
            break;
        case 2:
            demoView = [[OPTKDemoViewController alloc] initForExpandingAd:OPTKAdPositionBottom];
            break;
        case 3:
            demoView = [[OPTKDemoViewController alloc] initForExpandingAd:OPTKAdPositionTop];
            break;
        case 4:
            demoView = [[OPTKDemoViewController alloc] initForFlexAd:CGRectMake(20, 20, 250, 250)];
            break;
        case 5:
            demoView = [[OPTKDemoViewController alloc] initForPopupAd];
            break;
        default:
            break;
    }
    
    [self.navigationController pushViewController:demoView animated:YES];
}

@end
