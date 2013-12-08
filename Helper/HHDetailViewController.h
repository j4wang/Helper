//
//  HHDetailViewController.h
//  Helper
//
//  Created by Leah Dorner on 12/7/13.
//  Copyright (c) 2013 Leah Dorner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HHDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
