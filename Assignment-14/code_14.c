#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int num = rand();

  int *p = &num;
  printf("The value of the pointer is: %d", *p);

  return 0;
}
