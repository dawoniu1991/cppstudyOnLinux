#include <stdio.h>
#include <string.h>
#include <errno.h>

int main ()
{
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) 
   {
      printf("Error: %s\n", strerror(errno));
   }
   
      printf("Error======%d\n", errno);
      printf("Error: %s\n", strerror(0));
  return(0);
}
