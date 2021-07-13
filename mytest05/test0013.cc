#include <iostream>

class test{
    public:
    test(){
        std::cout<<"test gouzao"<<std::endl;
    }
    ~test(){
        std::cout<<"test xigou=========="<<std::endl;
    }
    void get() {
        std::cout<<"this is get======"<<std::endl;
    }

};

int main(){
    // #define fun()  (new test())->get()
    #define fun()   test().get()
    fun();
    return 0;
}