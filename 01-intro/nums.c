#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum1 = 40000 * 40000;
  int sum2 = 50000 * 50000;
  printf("sum1: %d     sum2: %d \n", sum1, sum2);

  float sum3 = (1e20 + -1e20) + 3.14;
  float sum4 = 1e20 + (-1e20 + 3.14);
  printf("sum3: %f     sum4: %f \n", sum3, sum4);
  return 0;
}
