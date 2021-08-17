/* waitpid.c */
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int pc = 11;

    if( pc ==11 )
    {
            printf("Error fork\n");
	    pc=15;
            printf("pc========%d\n",pc);
    }
    else if( pc == 15 )    
    {
            printf("222222222\n");
    }
    else  
    {
  
     printf("ingcheng\n");
    }
}
