#include <stdio.h>
 
int main ()
{
   /* 局部变量定义 */
   int a = 10;

   /* do 循环执行 */
   while(a<20){
      printf("a~~~~~~~~~~~~~~~~~%d\n", a);
      aaa:
      printf("a=================%d\n", a);
      if( a == 15)
      {
         /* 跳过迭代 */
         a = a + 1;
         goto aaa;
      }
      printf("a 的值： %d\n", a);
      a++;
   };

   bbbb:
   printf("woshibbb\n");
   if(a<23)
   { 
	   printf("a++++%d\n",a);
	   a++;
	   goto bbbb;}
   printf("end=========\n");

   return 0;
}
