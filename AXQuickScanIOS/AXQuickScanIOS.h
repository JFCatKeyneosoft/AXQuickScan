//
//  AXQuickScanIOS.h
//  AXQuickScanIOS
//
//  Created by Jean-François CONTART on 20/04/2015.
//
//

#import <UIKit/UIKit.h>

//! Project version number for AXQuickScanIOS.
FOUNDATION_EXPORT double AXQuickScanIOSVersionNumber;

//! Project version string for AXQuickScanIOS.
FOUNDATION_EXPORT const unsigned char AXQuickScanIOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AXQuickScanIOS/PublicHeader.h>


#ifdef DEBUG

#define __AXLog__
#endif
#ifdef __AXLog__
#define AXLog(message, ...) NSLog ((@"%s line %d " message), __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define AXLog(...)
#endif

#define AXError(message, ...) NSLog ((@"ERROR %s line %d " message), __FUNCTION__, __LINE__, ##__VA_ARGS__);
#define AXWarning(message, ...) NSLog ((@"WARNING %s line %d " message), __FUNCTION__, __LINE__, ##__VA_ARGS__);