#include <iostream> 
#include <chrono> 
int main() 
{ 
      std::pair<int, double> p1;  //使用默认构造函数
     p1.first = 11;
     p1.second = 2.5;
     std::cout << p1.first << ' ' << p1.second << std::endl;
    // std::cout << std::chrono::duration_cast<Time>(std::chrono::high_resolution_clock::now().time_since_epoch()) <<std::endl;

    time_t start_time_ = time(NULL);
    std::cout << start_time_ << std::endl;
    // std::cin.get(); 
}







