//
//  HBVLinkedTextView.h
//  HBVLinkedTextView
//
//  Created by Travis Henspeter on 9/11/14.
//  Copyright (c) 2014 herbivore. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^LinkedStringTapHandler)(NSString *linkedString);

@interface HBVLinkedTextView : UITextView

- (void)linkString:(NSString *)string defaultAttributes:(NSDictionary *)defaultAttributes highlightedAttributes:(NSDictionary *)highlightedAttributes tapHandler:(LinkedStringTapHandler)tapHandler;

- (void)linkStrings:(NSArray *)strings defaultAttributes:(NSDictionary *)defaultAttributes highlightedAttributes:(NSDictionary *)highlightedAttributes tapHandler:(LinkedStringTapHandler)tapHandler;

- (void)linkStringsWithRegEx:(NSRegularExpression *)regex defaultAttributes:(NSDictionary *)defaultAttributes highlightedAttributes:(NSDictionary *)highlightedAttributes tapHandler:(LinkedStringTapHandler)tapHandler;

- (void)reset;


@end
