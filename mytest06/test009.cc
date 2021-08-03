#include <stdio.h>

int main()
{
//    char* pconfName="test008.cc";
    FILE *fp;
    fp = fopen("test008.cc","r");
    if(fp == NULL)
        return false;

    //每一行配置文件读出来都放这里
    char  linebuf[501];   //每行配置都不要太长，保持<500字符内，防止出现问题
    
    //走到这里，文件打开成功 
    while(!feof(fp))  //检查文件是否结束 ，没有结束则条件成立
    {    
        //大家要注意老师的写法，注意写法的严密性，商业代码，就是要首先确保代码的严密性
        if(fgets(linebuf,500,fp) == NULL) //从文件中读数据，每次读一行，一行最多不要超过500个字符
            continue;

	printf("%s",linebuf);	
    }
    fclose(fp);

   return(0);
}
