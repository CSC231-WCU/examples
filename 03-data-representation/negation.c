#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  short x = (short)atoi(argv[1]);
  short y = ~x + 1;
  printf("-x is %d \n", y);
}

