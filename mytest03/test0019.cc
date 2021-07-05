#include <iostream>
#include <functional>


using namespace std::placeholders;
using namespace std;

void fun1(int n1, int n2, int n3)
{
    cout << n1 << " " << n2 << " " << n3 << endl;
}

int main()
{
    //_1表示这个位置是新的可调用对象的第一个参数的位置
    //_2表示这个位置是新的可调用对象的第二个参数的位置  
    auto f1 = bind(fun1, _2, 22, _1);
    f1(44,55);
}