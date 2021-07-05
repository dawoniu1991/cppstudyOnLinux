#include "test24.h"

int main()                                                                                                                                   
{
    test24::testclass<string> a;
    a.output("hello world aa");
    a.setvalue("aaaaawwwwwwww");
    string res=a.getvalue();
    std::cout<<"this is res==="<<res<<std::endl;
    string aa="qqq";
   
}