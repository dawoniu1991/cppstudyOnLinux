#include <limits>
#include <vector>
#include <stdlib.h>
#include <iostream>

int main(){
//    using Key = uint64_t;
   using Key = int;
   static const Key kMaxKey = std::numeric_limits<Key>::max();
      // init
  int num = 20;
  std::vector<Key> keys(num);
  std::vector<float> vals(num);

  int rank = 9;
  srand(rank + 7);
  for (int i = 0; i < num; ++i) {
    keys[i] = kMaxKey / num * i + rank;
    vals[i] = (rand() % 1000);
    std::cout<<i<<"keys[i]=="<<keys[i]<<std::endl;
    std::cout<<i<<"vals[i]=="<<vals[i]<<std::endl;
  }

  char a='q';
  std::cout<<"a=="<<a<<std::endl;
  return 0;
}