#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

void getNowTime()   //获取并打印当前时间
{
    timespec time;
    struct  tm nowTime;
    clock_gettime(CLOCK_REALTIME, &time);  //获取相对于1900到现在的秒数
    
    localtime_r(&time.tv_sec, &nowTime);
    char current[1024];
    printf(
        "%04d-%02d-%02d %02d:%02d:%02d\n",
        nowTime.tm_year + 1900,
        nowTime.tm_mon+1,
        nowTime.tm_mday,
        nowTime.tm_hour,
        nowTime.tm_min,
        nowTime.tm_sec);
}

int main()
{
    std::cout << "countdown:\n";
    std::cout <<"main id====="<< std::this_thread::get_id() << std::endl;
    for (int i = 5; i > 0; --i)
    {
        std::cout << i << std::endl;
        getNowTime();
        std::cout <<"id==="<< std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));    //暂停1秒
    }
    getNowTime();
    std::cout << "Lift off!\n";
 
    return 0;
}