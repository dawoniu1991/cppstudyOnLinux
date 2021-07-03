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

//   // 直接初始化
//   ClassTest(const char* pc)  
//   {
//     // strcpy_s(c, pc);
//     cout << "2) ClassTest (const char *pc)" << endl;
//   }

//   //复制/拷贝构造函数
//   ClassTest(const ClassTest& ct)  
//   {

//     cout << "3) ClassTest(const ClassTest& ct)" << endl;
//   }

//   //重载赋值操作符
//   ClassTest& operator=(const ClassTest& ct)  
//   {
//     cout << "4) ClassTest& operator=(const ClassTest &ct)" << endl;
//     return *this;
//   }

 private:
  char c[256];
};

ClassTest func(ClassTest temp) { return temp; }

int main() {
//   cout << "ct1: ";
//   ClassTest ct1("ab");  // 直接初始化

  cout << "\nct6===: "; // 依次調用 1)、2）、4），即默认、直接、重载
  ClassTest ct6;  
//   ct6 = "caoyan is a good boy!"; 

//   cout << "\nct7: ";  
//   ClassTest ct7;  // 依次調用 1)、3）、3）、4）
//   ct7 = func(ct6);

  return 0;
}