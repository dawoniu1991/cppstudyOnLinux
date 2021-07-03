#include <mutex>
#include <iostream>

class A
{
public:
    int get() const
    {
        std::lock_guard<std::mutex> lk( m );
        return value;
    }
    
    void set( int v )
    {
        value = v;
        return;
    }
private:
    // mutable std::mutex m; // 不加mutable，编译就会报错
    std::mutex m;
    int value;
};
int main()
{
    A a;
    std::cout << "Calling the main method" << std::endl;
    return 0;
}