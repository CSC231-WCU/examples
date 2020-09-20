#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  long x = 2;
  printf(" ULONG_MAX: %lu \n", ULONG_MAX);
  printf(" LONG_MAX: %ld \n", LONG_MAX);
  printf(" LONG_MIN: %ld \n", LONG_MIN);
  printf("x * LONG_MIN: %ld \n", LONG_MIN * 2);
  return 0;
}
