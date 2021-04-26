#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
    int i;
    A(int n):i(n) { };
    ~A() { cout << i << " " << "destructed" << endl; }
};
int main()
{
    
    shared_ptr<A> sp3;
   
    
    sp3.reset(new A(5));    // sp3托管A(5),A(2)无人托管，被delete
    A * p = sp3.get();      // get返回托管的指针，p 指向 A(2)
    cout << p->i << endl;  //输出 2
    cout << "end" << endl;
    return 0;
}