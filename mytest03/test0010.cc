// new edit on 2020.7.23
#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class ClassTest {
 public:

  //定义默认构造函数
  ClassTest()  
  {
    c[0] = '\0';
    cout << "1) ClassTest()" << endl;
  }

  // 直接初始化
  ClassTest(const char* pc)  
  {
    strcpy_s(c, pc);
    cout << "2) ClassTest (const char *pc)" << endl;
  }

  //复制/拷贝构造函数
  ClassTest(const ClassTest& ct)  
  {
    strcpy_s(c, ct.c);
    cout << "3) ClassTest(const ClassTest& ct)" << endl;
  }

  //重载赋值操作符
  ClassTest& operator=(const ClassTest& ct)  
  {
    strcpy_s(c, ct.c);
    cout << "4) ClassTest& operator=(const ClassTest &ct)" << endl;
    return *this;
  }

 private:
  char c[256];
};

ClassTest func(ClassTest temp) { return temp; }

int demo_test() {
//   cout << "ct1: ";
//   ClassTest ct1("ab");  // 直接初始化
//   cout << "ct2: ";
//   ClassTest ct2 = "ab"; // 直接初始化

  /*
  输出说明：关于编译优化：

  ClassTest ct2 = "ab";
  它本来是要这样来构造对象的：
  首先,调用构造函数ClassTest(const char *pc)函数创建一个临时对象。
  然后,调用复制构造函数，把这个临时对象作为参数，构造对象ct2。然而，编译也发现，复制构造函数是
  公有的，即你明确地告诉了编译器，你允许对象之间的复制，而且此时它发现可以通过直接调用重载的
  构造函数ClassTest(const char *pc)来直接初始化对象，而达到相同的效果，所以就把这条语句优化为
  ClassTest ct2（"ab"）。
  */
//   cout << "ct3: ";
//   ClassTest ct3 = ct1;  // 复制初始化
//   cout << "ct4: ";
//   ClassTest ct4(ct1);   // 复制初始化
//   cout << "ct5: ";
//   ClassTest ct5 = ClassTest();  // 默认构造函数
  
  cout << "\nct6: "; // 依次調用 1)、2）、4），即默认、直接、重载
  ClassTest ct6;  
  ct6 = "caoyan is a good boy!"; 

  cout << "\nct7: ";  
  ClassTest ct7;  // 依次調用 1)、3）、3）、4）
  ct7 = func(ct6);

  return 0;
}