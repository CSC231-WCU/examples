#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <show_bytes.h>
  
#define N 32

void decToBinary(int n) {
  int binaryNum[N]; 
  int i, j;

  for (i = 0; i < N; i++) {
    binaryNum[i] = 0;
  } 

  i = 0;
  while (n > 0) { 
    binaryNum[i] = n % 2; 
    n = n / 2; 
    i++; 
  }
 
  for (j = N - 1; j >= 0; j--) { 
    printf("%d", binaryNum[j]);
    if (j % 4 == 0) {
      printf(" ");
    }
  }
  printf("\n"); 
}

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
  printf ("|s|      exp      |                  mantissa"
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
