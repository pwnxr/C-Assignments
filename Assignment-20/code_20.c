#include <stdio.h>

struct my_struct{
  int i;
  char c;
  float f;
};

int main() {
  struct my_struct obj;
  obj.i = 7, obj.f = 3.14, obj.c = 'A';

  printf("This is the int: %d, this is the char: %c, this is the float: %f", obj.i, obj.c, obj.f);

  return 0;
}
