#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  unsigned int i;

  for (i = 10; i >= 0; i--) {
    sleep(1);
    printf("Value of i is: %u \n", i);
  }
}
