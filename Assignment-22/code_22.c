#include <stdio.h>

struct stats{
  int points, games;
};

int main() {
  struct stats players[5];

  for(int i = 0; i < 5; i++){
    printf("Enter Player %d's point total: ", i+1);
    scanf("%d", &players[i].points);
    printf("Enter Player %d's game total: ", i+1);
    scanf("%d", &players[i].games);
  } 

  for(int i = 0; i < 5; i++){
    float avg = (float)players[i].points / players[i].games;
    printf("Player %d's scoring average was %.2f ppg.\n", i+1, avg);
  }

  return 0;
}
