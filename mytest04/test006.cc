#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v1;
    vector<int> v2;
        if(v1.empty()){cout << "====v1_size: " << v1.size() << "\t vl_capacity: " << v1.capacity() << endl;}
    cout << "v1_size: " << v1.size() << "\t vl_capacity: " << v1.capacity()<<endl;
    cout << "v2_size: " << v2.size() << "\t v2_capacity: " << v2.capacity() << endl;
    v2.push_back(99);
    cout << "v2_size: " << v2.size() << "\t v2_capacity: " << v2.capacity() << endl;
    cout << endl;
    v1.resize(100);
    v2.resize(100);
    cout << "v1_size: " << v1.size() << "\t vl_capacity: " << v1.capacity() << endl;
    cout << "v2_size: " << v2.size() << "\t v2_capacity: " << v2.capacity() << endl;
    if(v1.empty()){cout << "==qqqqqq==v1_size: " << v1.size() << "\t vl_capacity: " << v1.capacity() << endl;}


    return 0;
}