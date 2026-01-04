#include <stdio.h>

int main() {
  int seconds, hours, minutes, tmp;
  
  printf("Enter the number of seconds: ");
  scanf("%d", &seconds);
  tmp = seconds;

  hours = seconds / (60*60);
  seconds -= hours*60*60;

  minutes = seconds / 60;
  seconds -= minutes*60;

  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", tmp, hours, minutes, seconds);

  return 0;
}
