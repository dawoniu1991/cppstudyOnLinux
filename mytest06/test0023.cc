#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>     //errno
#include <sys/stat.h>

int main(){
    printf("woainimen\n");
    char ss[]="1122334455";
    write(STDOUT_FILENO,ss,10);
   int fd = open("/dev/null", O_RDWR);
    write(STDOUT_FILENO,ss,3);
    if (fd == -1) 
    {
      printf("11111shibai\n");  
    }
    if (dup2(fd, STDIN_FILENO) == -1) //先关闭STDIN_FILENO[这是规矩，已经打开的描述符，动他之前，先close]，类似于指针指向null，让/dev/null成为标准输入；
    {
      printf("22shibai\n");  
    }
    if (dup2(fd, STDOUT_FILENO) == -1)
   {
      printf("333shibai\n");  
   }

    printf("iloveyou\n");
    write(STDOUT_FILENO,ss,10);
    return 0;
}
