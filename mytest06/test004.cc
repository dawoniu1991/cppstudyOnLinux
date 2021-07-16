#include <iostream>
#define COM(A,B) (A)*(B)
#define FUN(A,B) A*B
#define CHECK(X)  if(!(X)) std::cout<<"===11111===="<<(X)<<std::endl; \
  else std::cout<<"===2222222=="<<(X)<<std::endl;
int main(){
    int a=COM(2+3,5);
    std::cout<<"aa===="<<a<<std::endl;
    int b=FUN(2+3,5);
    std::cout<<"bb====="<<b<<std::endl;
    CHECK(3>0);

}