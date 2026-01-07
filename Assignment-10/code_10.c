#include <stdio.h>

int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("The array has %d elemnts\n", sizeof(arr) / sizeof(arr[0]));

  return 0;
}
