#include <iostream>
#include <vector>

int main(){
    std::vector<std::pair<int, int>> tracker_;
tracker_.push_back(std::make_pair(2, 0));
tracker_.push_back(std::make_pair(2, 0));
tracker_.push_back(std::make_pair(2, 0));
tracker_.push_back(std::make_pair(111, 999));
tracker_.push_back(std::make_pair(2, 0));

std::cout<<tracker_.size()<<std::endl;
std::cout<<tracker_[3].first<<std::endl;
std::cout<<tracker_[3].second<<std::endl;
return 0;
}