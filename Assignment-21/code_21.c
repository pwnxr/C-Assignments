#include <stdio.h>
#include <stdlib.h>

struct employee{
  int id, ssn;
  char *first_name, *last_name, *title;
};

struct employees{
  struct employee emp1;
  struct employee emp2;
} mange;

int read(struct employee* emp){
  char x;
  printf("Enter the employee's first name: ");
  scanf("%ms", &emp->first_name);
  scanf("%c", &x);

  printf("Enter the employee's last name: ");
  scanf("%ms", &emp->last_name);
  scanf("%c", &x);

  printf("Enter the employee's ID number: ");
  scanf("%d", &emp->id);

  printf("Enter the last four digits of the employee's SSN: ");
  scanf("%d", &emp->ssn);

  printf("Enter the employee's job title: ");
  scanf("%ms", &emp->title);
  scanf("%c", &x);

  if (!emp->first_name || !emp->last_name || !emp->title) {
    printf("Error: Malloc failed to allocate memory!\n");
    return 1;
  }

  return 0;
}

void print(struct employee* emp){
  printf("Employee information for %s %s:\n", emp->first_name, emp->last_name);
  printf("ID: %d\n", emp->id);
  printf("SSN: %d\n", emp->ssn);
  printf("Title: %s\n", emp->title);
}

void my_free(struct employee* emp){
  free(emp->first_name);
  free(emp->last_name);
  free(emp->title);
}

int main() {
  int a = read(&mange.emp1);
  int b = read(&mange.emp2);

  if(a || b) return 1;

  print(&mange.emp1);
  print(&mange.emp2);

  my_free(&mange.emp1);
  my_free(&mange.emp2);
  return 0;
}
