//
//  NWDetailTaskViewController.h
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NWTask.h"
#import "NWEditTaskViewController.h"

@protocol NWDetailViewControllerDelegate <NSObject>

-(void)updateTask;

@end

@interface NWDetailTaskViewController : UIViewController < NWEditTaskViewControllerDelegate >

@property (weak, nonatomic) id <NWDetailViewControllerDelegate> delegate;

@property (strong, nonatomic) NWTask *task;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;
@end
