#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
   std::vector<std::pair<int, int>> tracker_;
   int num=1;
   tracker_.push_back(std::make_pair(num, 0));

   tracker_.push_back(std::make_pair(num, 0));
  
   tracker_.push_back(std::make_pair(num, 0));

   tracker_.push_back(std::make_pair(1, 0));
   tracker_.push_back(std::make_pair(6, 0));


  std::cout<<tracker_.size() <<"========"<<std::endl;

  std::unordered_map<int, std::unordered_map<int, bool> > barrier_done_;
    barrier_done_[0].insert(std::make_pair(1, false));
    barrier_done_[0].insert(std::make_pair(1, false));
      for (auto& x: barrier_done_[0]) {
    std::cout << x.first << ": " << x.second << std::endl;
  }

  std::unordered_map<int, string> aaa;
  aaa.insert(std::make_pair(1, "qqq"));
  aaa.insert(std::make_pair(1, "zz"));
     for (auto& x: aaa) {
    std::cout << x.first << "==== " << x.second << std::endl;
  }
  std::cout << aaa.size() << std::endl;


}