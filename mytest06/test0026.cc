/* waitpid.c */
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pc, pr;

    pc = fork();

       int stat_val; // 子进程的终止信息通过这个参数传出
    if( pc < 0 )
    {
            printf("Error fork\n");
            exit(1);
    }
    else if( pc == 0 )    /* 子进程 */
    {
        /* 子进程暂停5s */
        sleep(20);
        /* 子进程正常退出 */
    }
    else    /* 父进程 */
    {
        /* 循环测试子进程是否退出 */
        do
        {
            /* 调用waitpid，且父进程不阻塞 */
         //   pr = waitpid(pc, NULL, WNOHANG);

          // pr=waitpid(pc, &stat_val, 0); // 参数0，使得WNOHANG 可以使父进程不阻塞而立即返回0
             pr=waitpid(pc, &stat_val, WNOHANG); // 参数0，使得WNOHANG 可以使父进程不阻塞而立即返回0
            /* 若子进程还未退出，则父进程暂停1s */
            if( pr == 0 )
            {
                printf("The child process has not exited\n");
                sleep(1);
            }
        }while( pr == 0 );

        	if (WIFEXITED(stat_val)) // WIFEXITED 取出的字段值非零 -> 正常终止
        		printf("Child exited with code%d\n", WEXITSTATUS(stat_val));
        		// WEXITSTATUS 取出的字段值就是子进程的退出状态
        	else if (WIFSIGNALED(stat_val)) //WIFSIGNALED 取出的字段值非零-> 异常终止
        		printf("Child terminated abnormally, signal %d\n", WTERMSIG(stat_val));

        /* 若发现子进程退出，打印出相应情况 */
        if( pr == pc )
        {
            printf("Get child exit code: %d\n",pr);
        }
        else
        {
            printf("Some error occured.\n");
        }
     printf("zhujingcheng\n");
     sleep(30);
     printf("ingcheng\n");
    }
}
