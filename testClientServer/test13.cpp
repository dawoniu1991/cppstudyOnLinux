#include <iostream> 
#include <chrono> 
int main() 
{ 
    std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::minutes(3)); 
    std::cout << "3 minutes equals to " << ms.count() << " milliseconds\n"; 

    std::cout << std::chrono::high_resolution_clock::now().time_since_epoch().count()<<std::endl;
    
    using Time = std::chrono::milliseconds;
    // std::cout << std::chrono::duration_cast<Time>(std::chrono::high_resolution_clock::now().time_since_epoch()) <<std::endl;

    // std::cin.get(); 
}