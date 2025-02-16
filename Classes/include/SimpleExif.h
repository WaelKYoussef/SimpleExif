//
//  Header.h
//  SimpleExif
//
//  Created by Wael Youssef on 16/02/2025.
//

#ifndef Header_h
#define Header_h

#include "../ExifContainer.h"

#if TARGET_OS_IPHONE
#include "../ios/UIImage+Exif.h"
#else
#include "../osx/NSImage+Exif.h"
#endif


#endif /* Header_h */
