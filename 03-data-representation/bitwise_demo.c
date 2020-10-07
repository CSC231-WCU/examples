#include <stdio.h> 
int main() 
{ 
  // a = 5(00000101), b = 9(00001001) 
  unsigned char a = 4, b = 5; 
  printf("Binary of 5: 0000 0101\n");
  printf("Binary of 9: 0000 1001\n");  

  // The result is 00000001 
  printf("a = %d, b = %d\n", a, b); 
  printf("a&b = %d\n", a & b); 
  printf("Binary: 0000 0001\n");

  // The result is 00001101 
  printf("a|b = %d\n", a | b); 
  printf("Binary: 0000 1101\n");

  // The result is 00001100 
  printf("a^b = %d\n", a ^ b); 
  printf("Binary: 000 1100\n");  

  // The result is 11111010 
  printf("~a = %d\n", a = ~a); 
  printf("Binary: 1111 1010\n");
  
  // The result is 00010010 
  printf("b<<1 = %d\n", b << 1); 
  printf("Binary: 0001 0010\n");  

  // The result is 00000100 
  printf("b>>1 = %d\n", b >> 1); 
  printf("Binary: 0000 0100\n");
  
  return 0; 
} 
