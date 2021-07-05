#include <iostream>
#include <functional>
using namespace std;
// using namespace std::placeholders;
using namespace std::placeholders;



void fun1(int n1, int n2, int n3)
{
    cout << n1 << " " << n2 << " " << n3 << endl;
}

int main()
{
    //原fun1接受三个参数，其中绑定了2个，第三个参数由新的可调用对象指定  
    auto f1 = bind(fun1, 11, 22, _1); 
    f1(33);                                                                                                                                  
}