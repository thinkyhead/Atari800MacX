/* Atari825Simulator.h - Atari825Simulator 
 header  For the Macintosh OS X SDL port of Atari800
 Mark Grebe <atarimacosx@gmail.com>
 
 */

#import <Cocoa/Cocoa.h>
#import "PrintableString.h"
#import "PrintableGraphics.h"
#import "PrinterProtocol.h"

typedef struct ATASCII_PREF {
    int formLength;
    int charSet;
    int charSize;
    int lineGap;
    char font[FILENAME_MAX];
} ATASCII_PREF;

@interface AtasciiPrinter : NSObject <PrinterProtocol> {
    NSFont *style;
	NSFont *styles[18];
	float leftMargin;
	float rightMargin;
	float startHorizPosition;
	float nextHorizPosition;
	float vertPosition;
	float lineSpacing;
	float formLength;
	float horizWidth;
	int skipOverPerf;
	bool splitPerfSkip;

	PrintableString *printBuffer;
}

+ (AtasciiPrinter *)sharedInstance;
- (void)addChar:(unsigned short)unicharacter;
- (void)generateFonts;
- (void)setStyle;
- (void)emptyPrintBuffer;
- (void)executeLineFeed:(float)amount;

@end
