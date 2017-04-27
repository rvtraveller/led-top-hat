#include "pantheon_sprite.h"

// Off
#define O CRGB(0, 0, 0),

// Red
#define R CRGB(200, 0, 0),

// Green
#define G CRGB(0, 200 0),

// Blue
#define B CRGB(0, 0, 200),

// Black
#define K CRGB(20, 20, 20),

// Brown
#define N CRGB(80, 20, 10),

// Yellow
#define Y CRGB(239, 208, 27),

const CRGB fist_positive[16][8] =
{
  { O Y O O O O O O },
  { O Y Y O O O O O },
  { O O Y Y O O O O },
  { Y Y Y Y Y O O O },
  { O Y Y Y Y Y O O },
  { K K K K K K K K },
  { K K K K K K K O },
  { K K Y Y K K K K },
  { K K Y Y K K K O },
  { K K K Y Y K K K },
  { K K K Y Y K K K },
  { O Y Y Y Y Y O O },
  { O O Y Y Y Y Y O },
  { O O O Y Y O O O },
  { O O O O Y Y O O },
  { O O O O O Y O O },
};

#undef O
#undef R
#undef G
#undef B
#undef K
#undef N
#undef Y

// Constructor
pantheon_sprite::pantheon_sprite() :
  sprite(12, 12)
{

}

// Paint the sprite
void pantheon_sprite::paint()
{
  for(int x = 0; x < 8; x++)
    for(int y = 0; y < 16; y++)
      set_sprite_pixel(x, y, fist_positive[y][x]);

}
