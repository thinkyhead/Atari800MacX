/* MemoryEditorAsciiFieldCell.h - MemoryEditorAsciiFieldCell 
 header  For the Macintosh OS X SDL port of Atari800
 Mark Grebe <atarimacosx@gmail.com>
 
 */


#import <Cocoa/Cocoa.h>


@interface MemoryEditorAsciiFieldCell : NSTextFieldCell {
}

- (id)init;
- (int) isValidCharacter:(char) c;
- (void) textDidChange:(NSNotification *) note;

@end
