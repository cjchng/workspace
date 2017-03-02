#include "fun.h"

extern float total;
extern short count;
short tax_percent = 6;


float add_with_tax(float f)
{
  float tax_rate = 1 + tax_percent / 100.0;
  /* And what about the tip? Voice lessons ain't free */
  total = total + (f * tax_rate);
  count = count + 1;
  return total;
}
