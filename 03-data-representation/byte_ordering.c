#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  void *p = malloc(sizeof(short));
  unsigned short *s = (unsigned short *)p;
  unsigned char *c = (unsigned char *)p;

  *s = 12345;
  printf("Decimal value is %d and hex value is %x at address (%p) \n", *s, *s, s);
  printf("Decimal value is %c and hex value is %x at address (%p) \n", *c, *c, c);
  printf("Decimal value is %c and hex value is %x at address (%p) \n", *(c + 1), *(c +1), c + 1); 
  return 0;
}

