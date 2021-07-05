#include <iostream>
using namespace std;

 class StringAppend{
      public:
          explicit StringAppend(const string& str) : ss(str){}
  
          void operator() (const string& str) const{
               cout<<str<<' '<<ss<<endl;
          }
      
      private:
         const string ss;  
 };

int main(){ 
 StringAppend myFunc("is world");
 myFunc("hello");
}