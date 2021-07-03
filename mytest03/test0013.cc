#include <iostream>
// #include <cstring>
#include <string>
#include <string.h>
using namespace std;

int main(void)
{
char *str1=NULL;
str1=new char[20];
char str[7];
// strcpy(str1,20,"hello world");//三个参数
strcpy(str,"hello");//两个参数但如果：char *str=new char[7];会出错：提示不支持两个参数
cout<<"strlen(str1):"<<strlen(str1)<<endl<<"strlen(str):"<<strlen(str)<<endl;
printf(str1);
printf("\n");
cout<<str<<endl;
return 0;
}