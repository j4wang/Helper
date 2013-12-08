//
//  HHMasterViewController.h
//  Helper
//
//  Created by Leah Dorner on 12/7/13.
//  Copyright (c) 2013 Leah Dorner. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HHDetailViewController;

@interface HHMasterViewController : UITableViewController

@property (strong, nonatomic) HHDetailViewController *detailViewController;

@end
