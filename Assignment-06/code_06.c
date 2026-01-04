#include <stdio.h>

int main() {
  int numerator, denominator;

  printf("Enter a numerator: ");
  scanf("%d", &numerator);
  printf("Enter a denominator: ");
  scanf("%d", &denominator);

  if(numerator % denominator)
    printf("There is a remainder!\n");
  else
    printf("There is NOT a remainder!\n");

  return 0;
}
