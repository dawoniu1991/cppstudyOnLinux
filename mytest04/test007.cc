#include <iostream>
using namespace std; 
  
// Driver Code 
int main() 
{ 
  
    // Declare variable of type int, const 
    // int, volatile int and const volatile int 
    typedef remove_cv<int>::type A; 
    typedef remove_cv<const int>::type B; 
    typedef remove_cv<volatile int>::type C; 
    typedef remove_cv<const volatile int&>::type D; 
    typedef remove_cv<const  int>::type E; 
  
    cout << "A:"
         << is_same<const volatile int, A>::value 
         << endl; 
  
    cout << "B:"
         << is_same<const volatile int, B>::value 
         << endl; 
  
    cout << "C:"
         << is_same<int, C>::value 
         << endl; 
  
    cout << "D:"
         << is_same<int, D>::value 
         << endl; 
  
     cout << "E:"
         << is_same<int, E>::value 
         << endl; 

         remove_cv<const  int>::type qq=12;
         std::cout<<qq<<std::endl;
    return 0; 
}