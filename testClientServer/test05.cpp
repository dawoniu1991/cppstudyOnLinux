#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <iostream>
 
int main()
{

 std::string role="qworker";
 bool  is_worker_;
  is_worker_ = role == "worker";

  std::cout<<is_worker_<<std::endl;

for (int i = 0; i <  1; ++i) {
      std::cout<<"port=============="<<std::endl;
    }

    const char* aa=getenv("ffffaa");
    if(aa==nullptr){
        std::cout<<"nullptr=============="<<std::endl;
    }else{
        std::cout<<"nullptr======"<<aa<<std::endl;
    }

  const char* nhost = nullptr;
      std::string ip;
      if (nhost) ip = std::string(nhost);
      std::cout<<"ip======"<<ip<<std::endl;
       std::cout<<"ip.size()======"<<ip.size()<<std::endl;

       if(ip==""){
        std::cout<<"nullptr=============="<<std::endl;
       }

    return 0;
}