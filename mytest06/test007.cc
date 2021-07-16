
#include <iostream>
#include <functional>
 
int main()
{
    std::function<int()> f = nullptr;
    f=[](){
        std::cout <<"qqqqqqqqqq" << '\n';
        return 12;
    };
    try {
        // f();
    } catch(const std::exception & e) {
        std::cout <<"aaaa======="<< e.what() << '\n';
    }
}