#include "test23.h"

namespace test23{
    testclass::testclass(){std::cout<<"this is gouzao"<<std::endl;}
    void testclass::output(string line){std::cout<<"this is line==="<<line<<std::endl;}
    void testclass::setvalue(string input){
        value=input;
        std::cout<<"this is set"<<std::endl;}
    string testclass::getvalue(){
        std::cout<<"this is get"<<std::endl;
        return value;
    }
}