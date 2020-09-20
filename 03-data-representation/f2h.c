#include <stdio.h>
#include <stdlib.h>
#include <show_bytes_hex.h>

int main(int argc, char* argv[]) {
  float x = atof(argv[1]);
  show_float(x);
}
