#include <stdio.h>
#include <string.h>

int main() {
  double sum = 0, count = 0, x;
  char cont = 'Y', choice = cont;
  
  for(; cont == choice; ){
    printf("Enter a test score: ");
    scanf("%lf", &x);
    sum += x, count++;

    scanf("%c", &choice);
    printf("Would you like to continue? Y/N: ");
    scanf("%c", &choice);
  }

  double avg = sum / count;
  printf("%lf is the average\n", avg);

  return 0;
}
