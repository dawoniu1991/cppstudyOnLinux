#include<stdio.h>
 #include <pthread.h>
 #include<unistd.h> 
#include <iostream>
static int count = 0;
 
void* thread_run(void* parm)
{
	for (int i=0;i<5;i++)
	{
		count++;
		printf("The thread_run method count is = %d\n",count);
		usleep(1500000);
	}
	return NULL;
}
 
int main()
{
	pthread_t tid;
    if(tid){
     std::cout<<"tid====111=="<<tid<<std::endl;
     }
	pthread_create(&tid, NULL, thread_run,NULL);
	// 加入pthread_join后，主线程"main"会一直等待直到tid这个线程执行完毕自己才结束
	// 一般项目中需要子线程计算后的值就需要加join方法
    if(tid){
     std::cout<<"tid====222=="<<tid<<std::endl;
     }
    std::cout<<"tid======"<<tid<<std::endl;
	pthread_join(tid,NULL);
    if(tid){
     std::cout<<"tid====333=="<<tid<<std::endl;
     }
     std::cout<<"tid======"<<tid<<std::endl;
	// 如果没有join方法可以看看打印的顺序
	printf("The count is = %d\n",count);
	return 0;
}