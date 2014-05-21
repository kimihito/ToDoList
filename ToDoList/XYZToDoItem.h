//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by kimihito on 2014/05/21.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
