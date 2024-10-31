#include "./types.h"

// Define our constants that will be widely used
#define TEXT_COLOR 0x07
#define VIDEO_MEM 0xB8000
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25
#define VGA_WIDTH 80  // Screen width (columns)
#define VGA_HEIGHT 25 // Screen height (rows)
#define VIDEO_MEMORY 0xB8000 // Start of video memory in VGA text mode

// Define our function prototypes
void outb(uint16 port, uint8 value);
void outw(uint16 port, uint16 value);
uint8  inb(uint16 port);
uint16 inw(uint16 port);

void initkeymap();
char getchar();
void scanf(char address[]);

int setcursor(int x, int y);
char putchar(char character);
int printf(char string[]);
int printint(uint32 n);
void clearscreen();
