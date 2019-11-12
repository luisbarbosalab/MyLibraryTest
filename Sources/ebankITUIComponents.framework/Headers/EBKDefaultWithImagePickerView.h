//
//  EBKDefaultWithImagePickerView.h
//  ebankITUIComponents
//
//  Created by Diogo Soeiro on 14/03/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <ebankITUIComponents/ebankITUIComponents.h>

@interface EBKDefaultWithImagePickerView : EBKCustomDataPickerView

#pragma mark - IBOutlets

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
 * @brief Picker label text (NSString)
 */
@property (strong, nonatomic) NSString *pickerLabelValue;

/*!
 * @brief Picker image value (NSString)
 */
@property (strong, nonatomic) NSString *pickerImageValue;

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
