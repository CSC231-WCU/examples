#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

void floatToBinary(float f) {
  union {
    float f;
    uint32_t u;
  } float_unsized_int;

  float_unsized_int.f = f;
  int i = sizeof f * CHAR_BIT;
  printf(" ");
  while (i--) {
    printf ("%d ", (float_unsized_int.u >> i) & 0x1);
  }
  putchar ('\n');
  printf ("|- - - - - - - - - - - - - - - - - - - - - - "
          "- - - - - - - - - -|\n");
  printf ("|s|      exp      |                  frac    "
          "                   |\n\n");

  i = sizeof(f) * CHAR_BIT;
  while (i--) {
    printf ("%d", (float_unsized_int.u >> i) & 0x1);
    if (i % 4 == 0) {
      printf(" ");
    }
  }
  putchar('\n');
}

int main(int argc, char* argv[]) {
  float x = atof(argv[1]);
  floatToBinary(x);
}

