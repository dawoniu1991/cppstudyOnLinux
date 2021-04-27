
#include "util/util01.cc"
#include "util/util02.cc"
#include "util/zmqvan.cc"
#include <iostream>
int main()
{
    std::cout << "sum = " << 12333445566 << std::endl; //sum = 4.6
    // util01();
    // test01 aa=test01();
    // aa.start();
    // test01::start();
    Van* van=new ZMQVan();
    return 0;
}