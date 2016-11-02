//  Created by Rafael Kayumov (RealPoc).
//  Copyright (c) 2013 Rafael Kayumov. License: MIT.

#import <Foundation/Foundation.h>

typedef enum {
    TabStateEnabled,
    TabStateDisabled
} TabState;

typedef enum {
    TabTypeUsual,
    TabTypeButton,
    TabTypeUnexcludable,
    TabTypeCustomGesture
} TabType;

@interface RKTabItem : NSObject

@property (readwrite) TabState tabState;
@property (readonly) TabType tabType;
@property (nonatomic, assign, readonly) id target;
@property (readonly) SEL selector;
@property (nonatomic, strong) UIColor *enabledBackgroundColor;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) NSString *titleString;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIColor *titleFontColor;
@property (nonatomic, strong) UIColor *titleFontColorEnabled;
@property (nonatomic, strong, readonly) UIImage *imageForCurrentState;

@property (nonatomic, assign) NSInteger badgeValue;
@property (nonatomic, assign) CGSize badgeOffset;

@property (nonatomic) CGFloat customAbsoluteWidth;
@property (nonatomic) CGFloat customFractionWidth;

+ (instancetype)createUsualItemWithImageEnabled:(UIImage *)imageEnabled
                                 imageDisabled:(UIImage *)imageDisabled;

+ (instancetype)createUnexcludableItemWithImageEnabled:(UIImage *)imageEnabled
                                        imageDisabled:(UIImage *)imageDisabled;

+ (instancetype)createButtonItemWithImage:(UIImage *)image
                                  target:(id)target
                                selector:(SEL)selector;

+ (instancetype)createItemWithImage:(UIImage *)image
                           gesture:(UIGestureRecognizer *)gesture;

- (void)switchState;

@end
