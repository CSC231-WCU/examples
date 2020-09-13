#include <stdio.h>
#include <stdlib.h>
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
