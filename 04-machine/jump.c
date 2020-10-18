#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  if (x > 0) {
    x = x + 10;
  } else {
    x = x - 10;
  }
  return 0; 
}
