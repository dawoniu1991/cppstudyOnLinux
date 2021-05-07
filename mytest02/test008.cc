#include <stdio.h>
#include <string.h>
 
int main ()
{
//    const char src[50] = "http://www.runoob.com";
//    char dest[50];
 
//    memcpy(dest, src, strlen(src)+1);
//    printf("dest = %s\n", dest);
   


   char res[19];
   memcpy(res, "aabbccdd", 8);
   res[8]='\0';
   printf("res = %s\n", res);
   

   return(0);
}