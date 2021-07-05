#include <iostream>
#include <unordered_map>
using namespace std;

template <typename Val>
class KVServer{
   public:
   string Response(string x);
};

template <typename val>
string KVServer<val>::Response(string x){
    std::cout<<"KVServer==x="<<x<<std::endl;
    return "Response return";
}


template <typename Val>
struct KVServerDefaultHandle {
  void operator()(
      Val ss, KVServer<Val>* server) {
    std::cout<<"ss====="<<ss<<std::endl;
    string res=server->Response( ss);
    std::cout<<"res====="<<res<<std::endl;
  }
  std::unordered_map<string, Val> store;
};


int main(){
    KVServerDefaultHandle<string> aa;
    KVServer<string>* server=new KVServer<string>();
    string input="aaa";
    aa("input",server);
    return 0;
}