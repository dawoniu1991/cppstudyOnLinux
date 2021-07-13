#include  <iostream>
#include <map>
#include <functional>
using namespace  std;

int main(){
        enum Level {
        UNKNOW = 0,
        DEBUG = 1,
        INFO = 2,
        WARN = 3,
        ERROR = 4,
        FATAL = 5
    };   
    Level aa=INFO;
    std::cout<<"aa=="<<aa<<std::endl;

    map<int, string> id_name = {
                { 2015, "Jim" },
                { 2016, "Tom" },
                { 2017, "Bob" } };
    for(auto x :id_name){
        std::cout<<"res=="<<x.first<<"sec==="<<x.second<<std::endl;
    }

         std::map<std::string, std::function<void(const std::string& str)> > s_format_items = {
#define XX(str, C) \
        {#str, [](const std::string& fmt) { std::cout<<"res=="<<fmt<<std::endl;}}

        XX(m, MessageFormatItem),
        XX(p, LevelFormatItem),
        XX(r, ElapseFormatItem),
#undef XX
    };

    for(auto x :s_format_items){
        std::cout<<"res=="<<x.first<<"sec==="<<std::endl;
        x.second("aaa");

    }

}
