//
//  EBKTextFieldConfigurator.h
//  ebankITUIComponents
//
//  Created by Pedro Marques on 25/01/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EBKTextFieldHelper : NSObject <UITextFieldDelegate>

@property (nonatomic, weak) id<UITextFieldDelegate> delegate;
@property (nonatomic) NSInteger decimalPlacesForFormatting;

@end
