#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int num = rand();
  int *p = &num;

  printf("The value of int variable is: %d\n", num);
  printf("The value of the pointer to the int variable is: %d\n", p);
  printf("The memory address of the int variable is: %d\n", &num);
  printf("The value held at the memory location that the pointer is pointing to is: %d\n", *p);

  return 0;
}
