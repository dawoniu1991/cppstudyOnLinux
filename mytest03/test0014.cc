#include <iostream>

int main(){
    char buffer_[9];
    time_t time_value = time(NULL);
    struct tm now;
    localtime_r(&time_value, &now);
    snprintf(buffer_, sizeof(buffer_), "%02d:%02d:%02d", now.tm_hour,
             now.tm_min, now.tm_sec);
   std::cout<<buffer_<<std::endl;
   
   
}