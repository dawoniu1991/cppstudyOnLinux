// function::swap example
#include <iostream>     // std::cout
#include <functional>   // std::function, std::plus

int main() {
  std::function<void()> foo,bar;
  foo = [](){std::cout << "function============" << ".\n";};
  
    std::cout << "变量foo的地址: " << &foo << std::endl;                        
    std::cout << "变量foo的地址: " << static_cast<void *>(&foo) << std::endl; 
    std::cout << "变量bar的地址: " << &bar << std::endl;                        
    std::cout << "变量bar的地址: " << static_cast<void *>(&bar) << std::endl;    

    std::cout << "foo is " << (foo ? "aaa" : "not callable") << ".\n";
  std::cout << "bar is " << (bar ? "bbb" : "not callable") << ".\n";
   foo();
//    bar();
  if(foo==nullptr){
      std::cout << "11111111111111" << ".\n";
      }
  if(bar==nullptr){
      std::cout << "22222222222222" << ".\n";
      }

  foo.swap(bar);

  std::cout << "foo is " << (foo ? "ccc" : "not callable") << ".\n";
  std::cout << "bar is " << (bar ? "ddd" : "not callable") << ".\n";
  bar();
//   foo();
  if(foo==nullptr){
      std::cout << "33333333333333" << ".\n";
      }
  if(bar==nullptr){
      std::cout << "44444444444444" << ".\n";
      }
    std::cout << "变量foo的地址: " << &foo << std::endl;                        
    std::cout << "变量foo的地址: " << static_cast<void *>(&foo) << std::endl; 
    std::cout << "变量bar的地址: " << &bar << std::endl;                        
    std::cout << "变量bar的地址: " << static_cast<void *>(&bar) << std::endl;    

  return 0;
}