#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
 
void sys_err(const char *str)
 {
 perror(str);
 exit(1);
 }
  
int main(void){
 pid_t pid;
 char buf[1024];
 int fd[2];
const char *p = "test for pipe\n";
  
if (pipe(fd) == -1)
 sys_err("pipe");
pid = fork();
 
if (pid < 0) {
sys_err("fork err");
} else if (pid == 0) {
close(fd[1]);
int len = read(fd[0], buf, sizeof(buf));
printf("buf======1111======%s",buf);
write(STDOUT_FILENO, buf, len);
printf("buf======2222======%s",buf);
close(fd[0]);
} else {
close(fd[0]);
write(fd[1], p, strlen(p));
wait(NULL);
close(fd[1]);
}
 
return 0;
 
}