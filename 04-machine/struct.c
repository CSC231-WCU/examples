#include <stdio.h>
#include <stdlib.h>
struct point {
  int x; 
  int y;
  char c;
};

int main(int argc, char *argv[]) {
  struct point* p = (struct point *)malloc(sizeof(struct point));
  (*p).x = 2;
  (*p).y = 3;
  p->c = 'a';
  printf("The coordinates of %c is %d and %d", (*p).c, (*p).x, (*p).y);
  printf("The coordinates of %c is %d and %d", p->c, p->x, p->y);
  return 0;
}

