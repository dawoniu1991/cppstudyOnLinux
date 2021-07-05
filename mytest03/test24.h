#ifndef __TEST24_H__
#define __TEST24_H__
using namespace std;
#include <string>
#include <iostream>
namespace test24{
    template <typename T>
    class testclass{
        public:
           testclass<T>();
           void output(T line);
           void setvalue(T input);
           T getvalue();
        private:
           T value;
    };


        template <typename T>
    testclass<T>::testclass(){std::cout<<"this is gouzao"<<std::endl;}
    template <typename T>
    void testclass<T>::output(T line){std::cout<<"this is line==="<<line<<std::endl;}
    template <typename T>
    void testclass<T>::setvalue(T input){
        value=input;
        std::cout<<"this is set"<<std::endl;}
    template <typename T>
    T testclass<T>::getvalue(){
        std::cout<<"this is get"<<std::endl;
        return value;
    }
}
#endif