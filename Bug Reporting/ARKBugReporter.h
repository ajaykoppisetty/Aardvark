//
//  ARKBugReporter.h
//  Aardvark
//
//  Created by Dan Federman on 10/6/14.
//  Copyright (c) 2014 Square, Inc. All rights reserved.
//

@protocol ARKBugReporter <NSObject>

/// Enables the user to report bugs by adding a button or installing a gesture recognizer that allows for bug reporting.
- (void)enableBugReporting;

/// Removes the user's ability to file a bug.
- (void)disableBugReporting;

@end