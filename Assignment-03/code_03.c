#include <stdio.h>

int main() {
  // char first_name[20], last_name[20];

  // printf("Enter your first name: ");
  // scanf("%19s", first_name);

  // printf("Enter your last name: ");
  // scanf("%19s", last_name);

  // POSIX extension
  char *first_name, *last_name;

  printf("Enter your first name: ");
  scanf("%ms", &first_name);

  printf("Enter your last name: ");
  scanf("%ms", &last_name);

  printf("Hello %s %s!\n", first_name, last_name);
  free(first_name), free(last_name);  

  return 0;
}
