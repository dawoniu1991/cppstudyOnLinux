#ifndef __TEST23_H__
#define __TEST23_H__
using namespace std;
#include <string>
#include <iostream>
namespace test23{
    class testclass{
        public:
           testclass();
           void output(string line);
           void setvalue(string input);
           string getvalue();
        private:
           string value;
    };
}
#endif