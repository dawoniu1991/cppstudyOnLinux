#include <iostream> 
#include <chrono> 
int main() 
{ 
      std::pair<int, double> p1;  //使用默认构造函数
     p1.first = 1;
     p1.second = 2.5;
     std::cout << p1.first << ' ' << p1.second << std::endl;
    // std::cout << std::chrono::duration_cast<Time>(std::chrono::high_resolution_clock::now().time_since_epoch()) <<std::endl;

    // std::cin.get(); 
}