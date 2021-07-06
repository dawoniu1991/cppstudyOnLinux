#include <iostream>
#include <memory>
using namespace std;

int main(){
   int* aa =new int[5]{11,22,33,66,99};
   std::cout<<*aa<<std::endl;
   std::cout<<aa<<std::endl;
   std::cout<<aa+2<<std::endl;
   std::cout<<aa[2]<<std::endl;
   std::shared_ptr<int> ss(aa);
   std::cout<<*ss.get()<<std::endl;
    std::cout<<ss.get()<<std::endl;
    std::cout<<ss.get()+2<<std::endl;
    std::cout<<ss.get()[2]<<std::endl;

    std::cout<<ss.get()+11<<std::endl;
    std::cout<<ss.get()[11]<<std::endl;
}