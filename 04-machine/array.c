#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a1[4];
  int a2[3][3];
  int a3[2][2][2];
  int *a4;
  int i=0,j=0,k=0;
  
  for (i = 0; i < 4; i++) {
    a1[i] = i;
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      a2[i][j] = i * 3 + j;
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++) {
        a3[i][j][k] = i * 2 + j * 2 + k;
      }
    }
  }
  a4 = (int *) malloc(sizeof(int) * 8);
  for (i = 0; i < 4; i++) {
    *(a4 + i) = i;
  }
  for (i = 4; i < 8; i++) {
    a4[i] = i;
  }  
  printf("This is it\n");
  return 0;
}
