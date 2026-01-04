#include <stdio.h>

#define pi 3.14

int main() {
  double radius;
  printf("Enter the radius of your circle: ");
  scanf("%lf", &radius);

  double area = pi * radius * radius;
  printf("The area of your circle is %lf\n", area);
  return 0;
}
