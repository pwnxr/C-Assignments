#include <stdio.h>

int main() {
  int n;
  
  printf("Enter an int number [1, 500]: ");
  scanf("%d", &n);

  if(n < 1 || n > 500) printf("Your number was not in any of our ranges.\n");
  else if(n <= 100) printf("Your number is between 1 and 100!\n");
  else if(n <= 200) printf("Your number is between 101 and 200!\n");
  else if(n <= 300) printf("Your number is between 201 and 300!\n");
  else if(n <= 400) printf("Your number is between 301 and 400!\n");
  else printf("Your number is between 401 and 500!\n");

  return 0;
}
