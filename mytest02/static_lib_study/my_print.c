#include <stdio.h>

void cout(const char * message)
{
    printf("aaaaa\n");
    fprintf(stdout, "%s\n", message);
    printf("qqqqq end\n");
}
