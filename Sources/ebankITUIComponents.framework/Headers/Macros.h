//
//  Macros.h
//  ebankITCore
//
//  Created by Barbara Correia on 06/02/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#define STATIC_STR(x) static NSString * const x = @#x
#define RGB_COLOR(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0f]
#define RGBA_COLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
