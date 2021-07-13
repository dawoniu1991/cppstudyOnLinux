#include <iostream>
#include <mutex>
#include <thread>
std::mutex cout_mutex;    //方便多线程打印

thread_local int x = 1;

void thread_func(const std::string& thread_name) {
    for (int i = 0; i < 3; ++i) {
        x++;
        std::lock_guard<std::mutex> lock(cout_mutex);
        std::cout << "变量x的地址: " << &x << std::endl;                        // 变量a的地址
        std::cout << "变量x的地址: " << static_cast<void *>(&x) << std::endl;    // 变量a的地址
        std::cout << "thread[" << thread_name << "]: x = " << x << std::endl;
    }
    return;
}

int main() {
    std::thread t1(thread_func, "t1");
    std::thread t2(thread_func, "t2");
    t1.join();
    t2.join();
    return 0;
}