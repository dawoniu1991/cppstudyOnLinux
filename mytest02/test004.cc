#include <iostream>
#include <thread>
using namespace std;

class background_task {
  public:
      void operator() () const {
         cout << "hello" << endl;
      } 
  };    

  void say() {

  }     

  int main() {
      background_task task;
      thread t(task);
      t.join();                                                                                                                                                                                                                        

      return 0;
  }     