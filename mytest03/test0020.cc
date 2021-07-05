
#include <iostream>
#include <functional>

using namespace std::placeholders;
using namespace std;

class A
{
public:
     A()
    {
        cout << "调用构造函数" << endl;
    }

    A(const A &obj)
    {
        cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    }

     A(const A &&obj)
    {
        cout << "调用移动构造函数" << endl;
    }

    void print(int n1, int n2, int n3)
    {
        cout << n1 << " " << n2 << " " << n3 << endl;
    }

};


int main()                                                                                                                                   
{
    A a;
    //类成员函数需要绑定该类的this指针  
    auto f1 = bind(&A::print, &a, _2, 22, _1);
    f1(66,55);

    auto f2 = bind(&A::print, a, _2, 22, _1);
    f2(11,88);
}