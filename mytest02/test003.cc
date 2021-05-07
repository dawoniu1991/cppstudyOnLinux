#include <iostream>
#include <iostream>
#include <memory>
#include <thread> 

class TestThread
{
public:
    std::unique_ptr<std::thread> receiver_thread_;
    void start();
    void receiving();
};

void TestThread::start()
{
    std::cout << "TestThread start!" << std::endl;
    receiver_thread_ = std::unique_ptr<std::thread>(new std::thread(&TestThread::receiving, this));
    std::cout << "TestThread start end!" << std::endl;
}



void TestThread::receiving()
{
    std::cout << "Hello receiving!" << std::endl;
}


int main()
{
    TestThread aa;
    aa.start();
    // aa.receiving();
//  receiver_thread_ = std::unique_ptr<std::thread>(new std::thread(&Van::Receiving, this));
    std::cout << "TestThread.str()" << '\n';
}