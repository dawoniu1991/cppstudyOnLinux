#include <iostream>
#include <memory>
#include <thread> 
#include "../head/headfile04.h"

void Hello::start()
{
    std::cout << "Hello start!" << std::endl;
    receiver_thread_ = std::unique_ptr<std::thread>(new std::thread(&Hello::receiving, this));
    std::cout << "Hello start end!" << std::endl;
}



void Hello::receiving()
{
    std::cout << "Hello receiving!" << std::endl;
}