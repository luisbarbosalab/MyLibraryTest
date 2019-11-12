//
//  EBKThemeManager.h
//  ebankITCore
//
//  Created by Eduardo Burnay on 21/12/16.
//  Copyright © 2016 ebankIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EBKThemeManager : NSObject

@property (strong, nonatomic) NSDictionary *themeColors;
@property (strong, nonatomic) NSDictionary *fonts;
@property (strong, nonatomic) NSDictionary *buttons;
@property (strong, nonatomic) NSDictionary *views;

+ (id)sharedManager;

- (void) loadWithColors:(NSDictionary*)colors fonts:(NSDictionary*)fonts buttons:(NSDictionary*)buttons views:(NSDictionary*)views;
- (UIColor*) getColor: (NSString*) color;
- (NSDictionary *) getAttributesDictionaryForTheme:(NSString *)theme;
@end
