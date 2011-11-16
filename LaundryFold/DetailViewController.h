//
//  DetailViewController.h
//  LaundryFold
//
//  Created by Victor Zhu on 11/16/11.
//  Copyright (c) 2011 U.C. Berkeley . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
