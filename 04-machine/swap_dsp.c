#include <stdlib.h>

void swap (long *xp) {
  long *t = malloc(sizeof(long) * 100);
  *(t + 50) = *xp;
}
