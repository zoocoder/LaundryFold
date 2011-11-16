//
//  MasterViewController.h
//  LaundryFold
//
//  Created by Victor Zhu on 11/16/11.
//  Copyright (c) 2011 U.C. Berkeley . All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
