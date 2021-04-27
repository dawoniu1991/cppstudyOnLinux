#include <ctime>
#include <iostream>
int main()
{
    char buffer_[9];
    std::cout << "buffer_ = " << buffer_ << std::endl;
    time_t time_value = time(NULL);
    std::cout << "sum = " << time_value << std::endl;
    struct tm now;
    localtime_r(&time_value, &now);
    std::cout << "sum = " << now.tm_hour << std::endl;
    std::cout << "sum = " << now.tm_min << std::endl;
    std::cout << "sum = " << now.tm_sec << std::endl;
    snprintf(buffer_, sizeof(buffer_), "%02d:%02d:%02d", now.tm_hour,
             now.tm_min, now.tm_sec);
    std::cout << "buffer_ = " << buffer_ << std::endl;
    std::cout << "buffer_[0] =" << buffer_[0] <<"buffer_[0]"<< std::endl;
    std::cout << "buffer_[7] = " << buffer_[7] << std::endl;
    // std::cout << "buffer_[8] = " << buffer_[8] <<"buffer_[8]"<< std::endl;
    if(buffer_[8]=='\0'){
        std::cout << "aaaa==== "  << std::endl;
    }
    return 0;
}