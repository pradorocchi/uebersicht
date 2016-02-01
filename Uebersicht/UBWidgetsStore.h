//
//  UBWidgetsStore.h
//  
//
//  Created by Felix Hageloh on 26/1/16.
//
//

#import <Foundation/Foundation.h>

@interface UBWidgetsStore : NSObject

- (void)onChange:(void (^)(NSDictionary*))aChangeHandler;
- (NSDictionary*)get:(NSString*)widgetId;
- (NSArray*)sortedWidgets;

@end