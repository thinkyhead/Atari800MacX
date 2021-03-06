#ifndef BIT3_H_
#define BIT3_H_

#include "atari.h"
#include <stdio.h>

#ifdef ATARI800MACX
#define BIT3_SCRN_WIDTH    (640)
#define BIT3_SCRN_HEIGHT   (240)
#define BIT3_CHAR_HEIGHT    (10)
#define BIT3_CHAR_WIDTH     (8)
#endif

extern int BIT3_palette[2];
#ifdef ATARI800MACX
extern char bit3_rom_filename[FILENAME_MAX];
extern char bit3_charset_filename[FILENAME_MAX];
#endif
int BIT3_Initialise(int *argc, char *argv[]);
void BIT3_Exit(void);
void BIT3_InsertRightCartridge(void);
int BIT3_ReadConfig(char *string, char *ptr);
void BIT3_WriteConfig(FILE *fp);
int BIT3_D5GetByte(UWORD addr, int no_side_effects);
void BIT3_D5PutByte(UWORD addr, UBYTE byte);
int BIT3_D6GetByte(UWORD addr, int no_side_effects);
void BIT3_D6PutByte(UWORD addr, UBYTE byte);
UBYTE BIT3_GetPixels(int scanline, int column, int *colour, int blink);
extern int BIT3_enabled;
void BIT3_Reset(void);
#ifdef ATARI800MACX
int Bit3GetCopyData(int startx, int endx, int starty, int endy, unsigned char *data);
#endif

#endif /* BIT3_H_ */
