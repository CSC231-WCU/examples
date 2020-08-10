#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

struct timeval tv; 

double timestamp() {
  double t;
  gettimeofday(&tv, NULL);
  t = tv.tv_sec + (tv.tv_usec/1000.0);
  return t;
}

int main(int argc, char *argv[]) {
  int i, j;
  double start, end;
  int dimension = 1000;
  int src[dimension][dimension];
  int dst[dimension][dimension];
    
  srand(42);
  for(i = 0; i < dimension; i++)
    for(j = 0; j < dimension; j++) {   
      src[i][j] = -1;
      dst[i][j] = 0;
    }   

  start = timestamp();
  for(i = 0; i < dimension; i++)
    for(j = 0; j < dimension; j++)
      dst[i][j] = src[i][j];
  end = timestamp();
  printf("v1 millisecs:%f\n", end-start);  

  start = timestamp();
  for(j = 0; j < dimension; j++)
    for(i = 0; i < dimension; i++)
      dst[i][j] = src[i][j];
  end = timestamp();
  printf("v2 millisecs:%f\n", end-start); 

  return 0;
}
