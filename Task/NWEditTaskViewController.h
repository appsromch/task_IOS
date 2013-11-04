//
//  NWEditTaskViewController.h
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NWTask.h"

@protocol NWEditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface NWEditTaskViewController : UIViewController

@property (weak, nonatomic) id <NWEditTaskViewControllerDelegate> delegate;
@property (strong, nonatomic) NWTask *task;
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;
@end
