// 将字符串复制到数组 dest 中
#include <stdio.h>
#include <string.h>
 
int main ()
{
   const char src[50] = "http://www.runoob.com";
   char dest[50];

   int len01=strlen(dest)+1;
   printf("res==%d\n",len01);
 
   int len=strlen(src)+1;
   printf("res==%d\n",len);
   memcpy(dest, src, strlen(src)+1);
   printf("dest = %s\n", dest);
   
   int len02=strlen(dest)+1;
   printf("res==%d\n",len02);
   return(0);
}