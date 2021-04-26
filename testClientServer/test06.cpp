

#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <iostream>
 
int main()
{
const char* buf="ps258";
size_t i = 2;
size_t size = 5;
int id=0;
      for (; i < size; ++i) {
          char aaa=buf[i];
          std::cout<<"aaa=========="<<aaa<<std::endl;
          std::cout<<"buf[i]=========="<<buf[i]<<std::endl;
        if (buf[i] >= '0' && buf[i] <= '9') {
          id = id * 10 + buf[i] - '0';
          std::cout<<"id========"<<id<<std::endl;
          
        } else {
          break;
        }
      }
std::cout<<"id=============="<<id<<std::endl;
    return 0;
}




