#include <stdio.h>
#include <string.h>

int main ()
{
   char str[] = "http://www.runoob.com";
   char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
   
   return(0);
}
