#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned short x = 65535;
  unsigned short y = 65535;
  unsigned short z = x + y;
  printf ("%hu + %hu causes a carry out of the most significant bit  with final result is %hu \n", x, y, z);
  printf ("%hu - %hu results in a zero %hu \n", x, y, x - y);
  short m = -32768;
  short n = -1; 
  printf("%hi - %hi will yield a negative value \n", m, n);
  short k = m + n;
  printf("%hi + %hi will cause an overflow with a final result is %hi \n", m, n, k);
  return 0;
}
