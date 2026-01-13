#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd = open("flag.txt", O_WRONLY | O_CREAT, S_IRWXU);

  if(fd < 0){
    printf("The open operation failed\n");
    return 1;
  }
  printf("The open operation succeeded\n");

  int b = write(fd, "flag{writing_to_desk0x}\n", 24);

  if(b != 24){
    printf("The write operation failed\n");
    return 1;
  }
  printf("The write operation succeeded\n");

  if (close(fd) == -1) {
    printf("Error closing file\n");
    return 1;
  }

  return 0;
}
