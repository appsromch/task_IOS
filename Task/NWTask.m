//
//  NWTask.m
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import "NWTask.h"

@implementation NWTask


-(id)initWithData:(NSDictionary *)data
{
    self = [ super init];
    
    if (self) {
        self.title = data[TASK_TITLE];
        self.description = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    
    return self;
    
}

-(id)init
{
    self = [self initWithData:nil];
    return self;
}
@end
