#include <stdio.h>
#include <stdlib.h>

long mult2(long a, long b, long c, long d, long e, long f, long g) { 
  long s = a * b * c * d * e * f * g; 
  return s;
}

void multstore(long x, long y, long *dest) {
  long t = mult2(x, y, 3, 4, 5, 6, 7);
  *dest = t;
}

int main(int argc, char* argv[]) {
  long *p = (long *)malloc(sizeof(long));
  multstore(1, 2, p);
  return 0;  
}
