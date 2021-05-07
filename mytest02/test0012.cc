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



// using Time = std::chrono::milliseconds;
// Time Now() {
//     return std::chrono::duration_cast<Time>(
//         std::chrono::high_resolution_clock::now().time_since_epoch());
// }

std::chrono::milliseconds Now() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::high_resolution_clock::now().time_since_epoch());
}

int main()
{
    std::cout << "countdown:\n";
    using Time = std::chrono::milliseconds;
    Time now = Now();
    std::cout <<"now=="<< now.count()<< std::endl;
    getNowTime();
    std::cout << "Lift off!\n";
    auto ts = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::cout <<"ts==="<< ts<< std::endl;
    return 0;
}