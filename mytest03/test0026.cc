#include <iostream>
#include <memory>
int main(){
    int* new_data = new int[5]{11,22,33,999,55};
    std::shared_ptr<int> aa;
    bool x=aa.get()==nullptr;
    std::cout<<x<<std::endl;
    // std::cout<<"begin="<<*aa.get()<<std::endl;
    aa.reset(new_data) ;
    x=aa.get()==nullptr;
    std::cout<<x<<std::endl;
    std::cout<<*aa.get()<<std::endl;
     std::cout<<aa.get()<<std::endl;
      std::cout<<new_data<<std::endl;
      std::cout<<(new_data+1)<<std::endl;
      std::cout<<*(new_data+1)<<std::endl;
      std::cout<<(new_data+2)<<std::endl;
      std::cout<<*(new_data+2)<<std::endl;
      std::cout<<(new_data+3)<<std::endl;
      std::cout<<*(new_data+3)<<std::endl;

    std::shared_ptr<int> bb = std::shared_ptr<int>(aa, aa.get() + 3);
    std::cout<<*bb.get()<<std::endl;
    std::cout<<bb.get()<<std::endl;
}