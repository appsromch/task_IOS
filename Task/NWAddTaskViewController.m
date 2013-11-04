//
//  NWAddTaskViewController.m
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import "NWAddTaskViewController.h"

@interface NWAddTaskViewController ()

@end

@implementation NWAddTaskViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma - IBActions

- (IBAction)addTaskButtonPressed:(UIButton *)sender
{
    // Protocol method
    [self.delegate didAddTask:[self returnNewTaskObject]];
}

- (IBAction)cancelButtonPressed:(UIButton *)sender
{
    // Protocol method
    [self.delegate didCancel];
}

#pragma - Helper Methods

-(NWTask *)returnNewTaskObject
{
    NWTask *task = [[NWTask alloc] init];
    task.title = self.textField.text;
    task.description = self.textView.text;
    task.date = self.datePicker.date;
    task.isCompleted = NO;
    
    return task;
}
@end
