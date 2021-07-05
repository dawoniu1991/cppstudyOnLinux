
#include <iostream>
#include <functional>

using namespace std::placeholders;
using namespace std;

class A
{
public:
    using funType=std::function<void()>;
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
    void testfun(){
        cout << "testFun=begin" << endl;
        ff();
        cout << "testFun=end" << endl;
    }
    void setfun(const funType x){
        ff=x;
    }
    funType ff;
};

class B
{
public:
     B(std::function<void()>& input):fun(input){
         std::cout<<"this is b class gouzao"<<std::endl;
        //  fun();
     }
     std::function<void()> fun;
};

void myfun(){
  std::cout<<"aaaaaaaaaaa"<<std::endl;
}

int main()                                                                                                                                   
{
    A a;
    std::function<void()> y=std::bind(&A::testfun,&a);
    // 
    B b(y);
    a.setfun(myfun);
    b.fun();
    //类成员函数需要绑定该类的this指针  
}