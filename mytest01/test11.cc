#include <iostream>
#include "util/hello.cc"
int main()
{
    Hello aa;
    aa.start();
    // aa.receiving();
//  receiver_thread_ = std::unique_ptr<std::thread>(new std::thread(&Van::Receiving, this));
    std::cout << "foo.str()" << '\n';
}