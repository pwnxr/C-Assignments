#include <stdio.h>

int main() {
  int x, scores[5] = {0};

  for(int i = 1; i <= 4; i++){
    printf("Game #%d\n", i);
    for(int j = 0; j < 5; j++){
      printf("Enter scoring total for Player #%d: ", j+1);
      scanf("%d", &x);
      scores[j] += x;
    }
  }

  int max_p = 0;
  for(int j = 1; j < 5; j++){
    if(scores[j] > scores[max_p])
      max_p = j;
  }

  printf("Player #%d had the highest scoring average at %d points per game.\n", max_p+1, scores[max_p] / 4);

  return 0;
}
