#ifndef __TEST25_H__
#define __TEST25_H__
using namespace std;
#include <string>
#include <iostream>
namespace test24{
    template <typename T>
    class testclass{
        public:
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
        private:
           T value;
    };
}
#endif