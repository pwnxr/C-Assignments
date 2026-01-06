#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;

  printf("Enther the value of the variable 'A': ");
  scanf("%d", &a);
  printf("Enther the value of the variable 'B': ");
  scanf("%d", &b);
  printf("Enther the value of the variable 'C': ");
  scanf("%d", &c);

  float disc = b*b - 4*a*c;
  if(disc < 0){
    printf("There are no real solution\n");
    return 0;
  }

  disc = sqrt(disc);
  float sol1 = (-b+disc)/(2*a), sol2 = (-b-disc)/(2*a);

  printf("The solution using the '+' operator is: %f", sol1);
  if(a*sol1*sol1 + b*sol1 + c != 0) printf(", but you might want to double check that...");

  printf("\nThe solution using the '-' operator is: %f", sol2);
  if(a*sol2*sol2 + b*sol2 + c != 0) printf(", but you might want to double check that...");
    
  printf("\n");

  return 0;
}
