
#include <iostream>
#include <functional>

using namespace std::placeholders;
using namespace std;

void fun_1(int a,int b)
{
    a++;
    b++;
    cout<<"print: a=" <<a<<",b="<<b<<endl;
}

void fun_2(int &a,int &b)
{
    a++;
    b++;
    cout<<"print: a=" <<a<<",b="<<b<<endl;
}

int main()                                                                                                                                   
{
int m = 2;
    int n = 3;
    auto f4 = std::bind(fun_1, placeholders::_1, n); //表示绑定fun_2的第一个参数为n, fun_2的第二个参数由调用f4的第一个参数（_1）指定。
    f4(m); //print: m=3,n=4
    cout<<"m="<<m<<endl;//m=3  说明：bind对于不事先绑定的参数，通过std::placeholders传递的参数是通过引用传递的,如m
    cout<<"n="<<n<<endl;//n=3  说明：bind对于预先绑定的函数参数是通过值传递的，如n
    
}