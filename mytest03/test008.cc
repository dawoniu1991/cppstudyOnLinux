#include <stdio.h>
#include<string.h>
 
int main()
 
{
  const char *s="http://www.runoob.com";
  char d[3];

   int len01=strlen(d)+1;
   printf("res==%d\n",len01);

//   memcpy(d, s+11, 6);// 从第 11 个字符(r)开始复制，连续复制 6 个字符(runoob)
//   // 或者 memcpy(d, s+11*sizeof(char), 6*sizeof(char));
//   d[6]='\0';
//   printf("%s\n", d);

//    int len02=strlen(d)+1;
//    printf("res02==%d\n",len02);
  return 0;
}