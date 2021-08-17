#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
    time_t curTime = time(NULL);
    time_t aftTime = curTime + 3600*3;
    printf("%d\n",curTime);
    printf("%d\n",aftTime);

    struct tm tm1;
    struct tm tm2;
    localtime_r(&curTime, &tm1);
    localtime_r(&aftTime, &tm2);

   printf("11===%d\n",tm1.tm_year);
   printf("22===%d\n", tm1.tm_mon );
   printf("33===%d\n",tm1.tm_mday);
   printf("44===%d\n",tm1.tm_hour);
   printf("55===%d\n",tm1.tm_min);
   printf("66===%d\n",tm1.tm_sec);


    fprintf(stdout, "%d%d%d%d%d%d\n",
            tm1.tm_year ,
            tm1.tm_mon ,
            tm1.tm_mday,
            tm1.tm_hour,
            tm1.tm_min,
            tm1.tm_sec);

    fprintf(stdout, "%04d%02d%02d%02d%02d%02d\n",
            tm2.tm_year + 1900,
            tm2.tm_mon + 1,
            tm2.tm_mday,
            tm2.tm_hour,
            tm2.tm_min,
            tm2.tm_sec);

    return 0;
}
