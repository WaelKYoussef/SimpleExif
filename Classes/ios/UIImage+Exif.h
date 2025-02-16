//
//  UIImage+Exif.h
//  Pods
//
//  Created by Nikita Tuk on 12/02/15.
//
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>

@class ExifContainer;

@interface UIImage (Exif)

- (NSData *)addExif:(ExifContainer *)container;

@end
#endif
