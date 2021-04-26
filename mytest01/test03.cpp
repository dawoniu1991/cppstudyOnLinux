#include <iostream> 

class CTempValue{
public:
    CTempValue(int i=0,int j=0);
    int Add(CTempValue tobj);

    virtual ~CTempValue(){
        std::cout << "xigou  hanshu" << std::endl;
    }


    CTempValue(const CTempValue &ts):val1(ts.val1),val2(ts.val2)
    {
        std::cout << "kaobei hanshu======="<< std::endl;
    }

    // Double(CTempValue &ts);

    int val1;
    int val2;

};

 CTempValue::CTempValue(int i,int j):val1(i),val2(j)
    {
        std::cout << "gouzao hanshu111111111 "<< std::endl;
    }

int CTempValue::Add(CTempValue tobj)
    {
        int tmp=tobj.val1+tobj.val2;
        tobj.val1=1000;
        return tmp;
    }

CTempValue Double(CTempValue &ts)
{
    CTempValue tmpm;
    tmpm.val1=ts.val1*2;
    tmpm.val1=ts.val1*2;
    return tmpm;
}

int main() 
{
     CTempValue ts1(10,20);
     Double(ts1);
    //  CTempValue ts3=Double(ts1);
std::cout << "rounb two============================" << std::endl;
  
     CTempValue ts5(100,200);
     std::cout << ts5.val1 << std::endl;
     ts5.Add(ts5);
     std::cout << ts5.val1 << std::endl;
    // std::cout << std::chrono::duration_cast<Time>(std::chrono::high_resolution_clock::now().time_since_epoch()) <<std::endl;

    // std::cin.get(); 
}