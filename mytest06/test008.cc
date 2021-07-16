#include <stdio.h>

int main()
{
   char str[80];
   str[0]=0;
   sprintf(str, "qqqqqqq= %d", 66);
   printf("res==%s\n",str);
   
   return(0);
}