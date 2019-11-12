//
//  EBKThreeRowDataPicker.h
//  ebankIT
//
//  Created by Pedro Marques on 26/09/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EBKCustomDataPickerView.h"

@interface EBKThreeRowDataPicker : EBKCustomDataPickerView

#pragma IBOutlets

/*!
 * @brief IBOutlet for picker arrow icon (UIImageView)
 */
@property (nonatomic, weak) IBOutlet UILabel *rowTitle1Label;
@property (nonatomic, weak) IBOutlet UILabel *rowTitle2Label;
@property (nonatomic, weak) IBOutlet UILabel *rowTitle3Label;
@property (nonatomic, weak) IBOutlet UILabel *rowDescription1Label;
@property (nonatomic, weak) IBOutlet UILabel *rowDescription2Label;
@property (nonatomic, weak) IBOutlet UILabel *rowDescription3Label;

/*!
 * @brief IBOutlet for picker arrow icon (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowIcon;

/*!
 * @brief IBOutlet for picker arrow image in ipad (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowIconIpad;

#pragma mark - Configurable Properties

/*!
 * @brief Picker border color (NSString)
 */
@property (strong, nonatomic) NSString *borderColor;

/*!
 * @brief Picker placeholder text (NSString)
 */
@property (strong, nonatomic) NSString *placeholder;

#pragma mark - Methods

/*!
 * @discussion This method allow to set if an error must be presented
 * @param show Boolean to set if an error exists
 */
- (void)showError:(BOOL)show;

@end


@interface EBKThreeRowDataPickerObject : NSObject



/*!
 * @brief Picker row title label 1 text (NSString)
 */
@property (nonatomic, strong) NSString *rowTitle1;

/*!
 * @brief Picker row title label 2 text (NSString)
 */
@property (nonatomic, strong) NSString *rowTitle2;

/*!
 * @brief Picker row title label 3 text (NSString)
 */
@property (nonatomic, strong) NSString *rowTitle3;

/*!
 * @brief Picker row description label 1 text (NSString)
 */
@property (nonatomic, strong) NSString *rowDescription1;

/*!
 * @brief Picker row description label 2 text (NSString)
 */
@property (nonatomic, strong) NSString *rowDescription2;

/*!
 * @brief Picker row description label 3 text (NSString)
 */
@property (nonatomic, strong) NSString *rowDescription3;

@end
