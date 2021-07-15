#include <iostream>

class qqq{
    public:
    qqq(){
        std::cout<<"======qqqqq======"<<std::endl;
    }
};


class www{
    public:
    www(){
        std::cout<<"====www===="<<std::endl;
    }
    qqq QQ;
};

int main(){
    // www a;
    return 0;
}