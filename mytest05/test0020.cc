#include <string>
#include <iostream>
int main(){

    std::string s = "Hello World!";
    printf("%s", s.c_str()); //输出 "Hello World!"
    const char *c=s.c_str();
     printf("%s", c);

    std::cout << "变量s的地址: " << &s << std::endl;  
    std::cout << "变量s==: " << *(&s) << std::endl; 
    std::cout << "变量s的地址: " << static_cast<void *>(&s) << std::endl;
    std::cout << "变量a的地址: " << &c << std::endl;     
    std::cout << "变量c====: " << *(&c) << std::endl;                       // 变量a的地址
    std::cout << "变量a的地址: " << static_cast<void *>(&c) << std::endl;
}