#include <stdio.h>
#include <stdlib.h>

int main() {
  char *p = malloc(10 * sizeof(char));

  if(!p){
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Memory was succesfuly allocated\n");

  free(p), p = NULL;
  return 0;
}
