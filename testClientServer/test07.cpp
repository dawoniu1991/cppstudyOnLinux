#include <iostream>
#include <queue>
#include <vector>
 

struct compare {
	bool operator()(const int& l, const int& r) {
		return l < r;
	}
};

int main()
{
	using namespace std;
	priority_queue<int, vector<int>, compare > pq;
 
	pq.push(3);
	pq.push(5);
	pq.push(1);
	pq.push(8);
 
	std::cout << "pq contains:";
	while (!pq.empty()) {
		std::cout << ' ' << pq.top();
		pq.pop();
	}
	std::cout << '\n';
  
    return 0;
}


