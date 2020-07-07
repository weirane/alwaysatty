#include <dlfcn.h>
#include <stdlib.h>
#include <stdio.h>

static int (*orig_isatty)(int) = 0;

int isatty(int fd)
{
        return fd == 1 ? 1 : orig_isatty(fd);
}

__attribute__((constructor)) static void setup(void)
{
        void *libc = dlopen("libc.so.6", RTLD_LAZY);
        if (!libc) {
                printf("dlopen: %s\n", dlerror());
                exit(1);
        }
        orig_isatty = dlsym(libc, "isatty");
        if (!orig_isatty) {
                printf("dlsym: %s\n", dlerror());
                exit(1);
        }
}
