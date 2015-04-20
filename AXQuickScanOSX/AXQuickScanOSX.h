//
//  AXQuickScanOSX.h
//  AXQuickScanOSX
//
//  Created by Jean-François CONTART on 20/04/2015.
//
//

#import <Cocoa/Cocoa.h>

//! Project version number for AXQuickScanOSX.
FOUNDATION_EXPORT double AXQuickScanOSXVersionNumber;

//! Project version string for AXQuickScanOSX.
FOUNDATION_EXPORT const unsigned char AXQuickScanOSXVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AXQuickScanOSX/PublicHeader.h>



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