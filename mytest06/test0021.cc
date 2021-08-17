







#include <stdio.h>

int main(){
    struct timeval   tv;
    struct tm        tm;
    time_t           sec;   //秒

    memset(&tv,0,sizeof(struct timeval));    
    memset(&tm,0,sizeof(struct tm));

    gettimeofday(&tv, NULL);     
    sec = tv.tv_sec;             //秒
    localtime_r(&sec, &tm); 
    printf("");
}
