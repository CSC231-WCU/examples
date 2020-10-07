#include <stdio.h>
int main(int argc, char *argv[]) {
  unsigned short x, y, z;
  int a, b, c;
  x = 60000;
  y = 60000;
  z= x + y;
  printf("%d + %d = %u \n", x, y, x + y);

  a = 60000;
  b = 60000;
  c= (a + b) % 65536;
  printf("%d + %d = %d \n", a, b, c);
}

