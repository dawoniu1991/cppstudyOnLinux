#include <iostream>

int a=[](){
    std::cout<<"before out"<<std::endl;
    return 1;
}();

int main(){
    std::cout<<"main==="<<std::endl;
    return 1;
}