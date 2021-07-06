#include <iostream>
// #include <string.h>
#include <memory.h>
// #include <memory>
using namespace std;
int main(){
    using V=int;
    int size_=3;
    // V* old_data = new int(6666);
    V* old_data01 = new V[3]{111,120,133};
    V* old_data02 = new V[5]{1,2,3,4,5};
    V* new_data = new int(6666);
    // std::cout<<new_data[0]<<std::endl;
    // std::cout<<new_data[1]<<std::endl;
    // std::cout<<new_data[2]<<std::endl;
    // int size=sizeof(new_data) / sizeof(new_data[0]);
    // std::cout<<new_data<<std::endl;
    memcpy(new_data, old_data01, 3*sizeof(V));
    for(int i=0;i<=8;i++){
        std::cout<<new_data[i]<<std::endl;
    }
    memcpy(new_data+3, old_data02, 5*sizeof(V));
    std::cout<<"memset=qqqqqqqq"<<std::endl;
 for(int i=0;i<=8;i++){
        std::cout<<new_data[i]<<std::endl;
    }
//     std::cout<<*(old_data)<<std::endl;
//     std::cout<<*(old_data+1)<<std::endl;
//     std::cout<<*(old_data+2)<<std::endl;
//     std::cout<<*(old_data+3)<<std::endl;
//      std::cout<<*(old_data+4)<<std::endl;
//     std::cout<<new_data<<std::endl;
//     std::cout<<new_data+1<<std::endl;
//     std::cout<<new_data+2<<std::endl;
//     std::cout<<new_data+3<<std::endl;
//     std::cout<<new_data+4<<std::endl;
//     std::cout<<new_data+5<<std::endl;
// std::cout<<*(new_data+1)<<std::endl;
//     memset(new_data,1,3*sizeof(int));
//     std::cout<<"memset=qqqqqqqq"<<std::endl;
//     std::cout<<*(new_data+1)<<std::endl;
//      std::cout<<new_data<<std::endl;
//     std::cout<<new_data+1<<std::endl;
//     std::cout<<new_data+2<<std::endl;
//     std::cout<<new_data+3<<std::endl;
//     std::cout<<new_data+4<<std::endl;
//     std::cout<<new_data+5<<std::endl;
//     if(new_data[2]==0){
//       std::cout<<"memset==="<<std::endl;
//       }
//      for(int i=0;i<=5;i++){
//         std::cout<<new_data[i]<<std::endl;
//     }
}
