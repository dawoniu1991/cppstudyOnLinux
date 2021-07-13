#include <iostream>
#include <fstream>
#include "yaml-cpp/yaml.h"
using namespace std;

string ss="qqqwww";
// cout << "main begin======"<< ss<< endl;

int main(int argc,char** argv)
{
    YAML::Node config = YAML::LoadFile("./config.yaml");
    
    if(config.IsMap()) {
        cout << "skills c++:" << endl;
        cout << "main begin====ss="<< ss<< endl;
        for(auto it = config.begin();
                it != config.end(); ++it) {
            string aa=it->first.Scalar();
            cout << "res="<<aa << endl;
            // string bb=it->second;
            cout << "second============="<< it->second<< endl;
                    
        }
    }

    // cout << "name:" << config["name"].as<string>() << endl;
    // cout << "sex:" << config["sex"].as<string>() << endl;
    // cout << "age:" << config["age"].as<int>() << endl;
   
    // cout << "skills c++:" << config["skills"]["c++"].as<int>() << endl;
    // cout << "skills java:" << config["skills"]["java"].as<int>() << endl;
    // cout << "skills android:" << config["skills"]["android"].as<int>() << endl;
    // cout << "skills python:" << config["skills"]["python"].as<int>() << endl;

    // for(YAML::const_iterator it= config["skills"].begin(); it != config["skills"].end();++it)
    // {
    //     cout << it->first.as<string>() << ":" << it->second.as<int>() << endl;
    // }

    // YAML::Node test1 = YAML::Load("[1,2,3,4]");
    // cout << " Type: " << test1.Type() << endl;

    // YAML::Node test2 = YAML::Load("1");
    // cout << " Type: " << test2.Type() << endl;

    // YAML::Node test3 = YAML::Load("{'id':1,'degree':'senior'}");
    // cout << " Type: " << test3.Type() << endl;
    return 0;
}

