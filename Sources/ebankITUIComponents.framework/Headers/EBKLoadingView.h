//
//  LoadingView.h
//  ebankIT
//
//  Created by Eduardo Burnay on 15/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DGActivityIndicatorView.h"

@interface EBKLoadingView : UIView

#pragma mark - Configurable Properties

/*!
 * @brief Loading top distance (CGFloat)
 */
@property (nonatomic) CGFloat topDistance;

/*!
 * @brief Loading bottom distance (CGFloat)
 */
@property (nonatomic) CGFloat bottomDistance;

/*!
 * @brief Bool value to set if loading is active
 */
@property (nonatomic) BOOL isLoading;

/*!
 * @brief DGActivityIndicatorView for loading
 */
@property (strong, nonatomic) DGActivityIndicatorView* activityIndicatorView;

/*!
 * @brief DGActivityIndicatorView for loading background
 */
@property (strong, nonatomic) DGActivityIndicatorView* activityIndicatorViewBackground;

/*!
 * @brief Loading background color (UIColor)
 */
@property (strong, nonatomic) UIColor *backgroundColor;

/*!
 * @brief Loading indicator color (UIColor)
 */
@property (strong, nonatomic) UIColor *indicatorColor;

/*!
 * @brief DGActivityIndicatorAnimationType for loading background
 */
@property (nonatomic) DGActivityIndicatorAnimationType indicatorAnimationBackgroundType;

/*!
 * @brief DGActivityIndicatorAnimationType for loading
 */
@property (nonatomic) DGActivityIndicatorAnimationType indicatorAnimationType;

/*!
 * @brief Bool value to set if blur is active
 */
@property (nonatomic) BOOL blurActive;

/*!
 * @brief Blur effect (UIBlurEffect)
 */
@property (strong, nonatomic) UIBlurEffect *blurEffect;

/*!
 * @brief Blur alpha (CGFloat)
 */
@property (nonatomic) CGFloat blurAlpha;

#pragma mark - Methods

/*!
 * @discussion This method allows to start loading
 */
- (void) startLoading;

/*!
 * @discussion This method allows to stop loading
 */
- (void) stopLoading;

/*!
 * @discussion This method allows to force stop loading
 */
- (void) forceStopLoading;

@end
