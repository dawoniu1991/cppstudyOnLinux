#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
 
int main()
{
    vector<int> obj;//创建一个向量存储容器 int
    for(int i=0;i<8;i++) // push_back(elem)在数组最后添加数据 
    {
        obj.push_back(i);
        cout<<obj[i]<<",";    
    }
    int aa=obj[5];
    cout<<aa<<endl;

}