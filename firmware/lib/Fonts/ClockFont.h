#ifndef __CLOCKFONT_H
#define __CLOCKFONT_H

#include <stdint.h>

typedef struct ClockFont
{    
  const uint8_t *table;
  uint16_t Width;
  uint16_t Height;
  
} sClockFont;

extern sClockFont SimpleClockFont;
extern sClockFont ClockFontBig;

#endif  // __CLOCKFONT_H