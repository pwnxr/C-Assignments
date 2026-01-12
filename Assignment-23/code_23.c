#include <stdio.h>

struct test{
  int i;
};

int main() {
  struct test *p;
  struct test obj;
  p = &obj;

  obj.i = 1;
  printf("%d\n", obj.i);

  (*p).i = 2;
  printf("%d\n", obj.i);

  p->i = 3;
  printf("%d\n", obj.i);
  
  return 0;
}
