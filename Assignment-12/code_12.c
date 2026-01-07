#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int num, h = 0, t = 0;
  printf("How many times would you like to flip the coin? ");
  scanf("%d", &num);

  srand(time(NULL));

  for(int i = 0, x; i < num; i++){
    x = rand() % 2;
    if(!x) h++;
    else t++;
  }

  printf("After flipping the coin %d times, the results were:\n", num);
  printf("%d heads\n", h);
  printf("%d tails\n", t);

  return 0;
}
