//
//  NWDetailTaskViewController.h
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NWTask.h"

@interface NWDetailTaskViewController : UIViewController

@property (strong, nonatomic) NWTask *task;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;
@end
