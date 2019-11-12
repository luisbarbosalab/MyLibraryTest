//
//  Enums.h
//  ebankIT
//
//  Created by Barbara Correia on 07/02/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//


typedef NS_ENUM(NSInteger, ErrorViewType) {
    TopErrorView,
    AlertErrorView,
    ScreenErrorView
};

typedef NS_ENUM(NSInteger, AlertType) {
    EmptyDataAlertType,
    ErrorAlertType,
    SuccessAlertType,
    WarningAlertType,
    OtherType
};

typedef NS_ENUM(NSInteger, PickerPresentationStyle)  {
    PickerModalPresentation,
    PickerPushPresentation,
    PickerModalPresentationWhenTablet,
};
