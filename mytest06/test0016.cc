#include <stdio.h> 
#include <stdarg.h> 
 
int AveInt(int,...);
 
int main()
{
   printf("%d\n",AveInt(2,2,3));
   printf("%d\n",AveInt(4,2,4,6,8));
 
   return 0;
}
 
int AveInt(int v,...)
{
   int ReturnValue=0;
   int i=v;
   printf("i=====%d\n",i); 
   printf("v=====%d\n",v); 
   va_list ap ;
   va_start(ap,v);
 
   while(i>0)
   {
       ReturnValue+=va_arg(ap,int) ;
       i--;
   }    
   va_end(ap); 
   return ReturnValue;
}
