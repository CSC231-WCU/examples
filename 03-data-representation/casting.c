#include <stdio.h>

int main(int argc, char *argv[]) {
  unsigned int x1 = 10;
  unsigned int x2 = 2147483650;
  int y1 = (int) x1;
  int y2  = (int) x2;
  printf("x1 (%u) is converted to y1 (%d) \n", x1, y1);
  printf("x2 (%u) is converted to y2 (%d) \n", x2, y2);
  return 0;
}
