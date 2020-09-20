#include <stdio.h>
int main(int argc, char *argv[]) {
  short x, y, z;
  x = 32767;
  y = -32768;
  z = 1;

  short no = y - z;
  short po = x + z;

  printf("Negative overflow: %d - %d = %d \n", y, z, no);
  printf("Normal sum: %d + %d = %d \n", x, y, x + y);
  printf("Positive overflow: %d + %d = %d \n", x, z, po);
}

