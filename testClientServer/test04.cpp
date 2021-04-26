#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <iostream>
 
int main()
{

char buffer_[9];
    time_t time_value = time(NULL);
     std::cout<<time_value<<std::endl;
    struct tm now;
    localtime_r(&time_value, &now);
    snprintf(buffer_, sizeof(buffer_), "%02d:%02d:%02d", now.tm_hour,
             now.tm_min, now.tm_sec);
    std::cout<<buffer_<<std::endl;

    unsigned seed = static_cast<unsigned>(time(NULL) + 1234);
    std::cout<<seed<<std::endl;


    int port = 10000 + rand_r(&seed) % 40000;
    std::cout<<port<<std::endl;

for (int i = 0; i <  1; ++i) {
      std::cout<<"port=============="<<std::endl;
    }

    return 0;
}