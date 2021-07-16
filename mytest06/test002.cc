#include <stdio.h>
#include <ucontext.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main()
{
    ucontext_t context;

    if (getcontext(&context))
    {
        perror("getcontext");
        return -1;
    }

    printf("helloaaa\n");
    sleep(1);
    if (setcontext(&context))
    {
        perror("setcontext");
        return -1;
    }

    return 0;
}