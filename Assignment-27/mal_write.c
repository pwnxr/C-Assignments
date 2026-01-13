#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>
#include <string.h>

ssize_t write(int fd, const void *buf, size_t count){
    ssize_t (*mal_write)(int fd, const void *buf, size_t count);
    mal_write = dlsym(RTLD_NEXT, "write");
    ssize_t res;

    if(strcmp(buf, "Hello, World!") == 0)
        res = mal_write(fd, "Goodbye, cruel world!", 21);
    else
        res = mal_write(fd, buf, count);

    return res;
}