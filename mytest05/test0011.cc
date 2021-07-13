#include <string>
#include <sstream>
#include <iostream>
 
using namespace std;
 
int main()
{
    stringstream sstream;
 
    // 将多个字符串放入 sstream 中
    sstream << "111" << " " << "222,";
    sstream;
    // sstream << " 333 444";
    // cout << "strResult is: " << sstream.str() << endl;
 
    // // 清空 sstream
    // sstream.str("");
    // sstream << "third string";
    // cout << "After clear, strResult is: " << sstream.str() << endl;
 
    return 0;
}