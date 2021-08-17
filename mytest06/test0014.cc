#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main ()
{
      printf("Error===begin===%d\n", errno);
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) 
   {
      printf("Error: %s\n", strerror(errno));
   }
   
      printf("Error======%d\n", errno);
      printf("Error: %s\n", strerror(0));

   char ss[]="womenaini";
 int   n = write(STDERR_FILENO,ss,3);
   printf("n===%d\n",n);
  return(0);
}
