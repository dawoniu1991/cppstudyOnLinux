#include <iostream>
#include <thread>
#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
using namespace std;


void RecvMsg() {
   cout << "this is say function print" << endl;
    void *context_ = zmq_ctx_new();
    zmq_ctx_set(context_, ZMQ_MAX_SOCKETS, 65536);
     void *receiver_ = zmq_socket(context_, ZMQ_ROUTER);
    string address="tcp://127.0.0.1:8888";
     if (zmq_bind(receiver_, address.c_str()) != 0) {
         printf("zmq_bind failed~~\n");
    return;
     }
    
while(true){
  printf("收到 Hello~~\n");
    zmq_msg_t* zmsg = new zmq_msg_t;
    if(zmq_msg_init(zmsg) != 0)
    {
    printf("zmq_msg_init failed~~\n");
    return;}

        int num=1122;
        printf("收到kaishi  jieshou xiaoxi\n");
         while (true) {
             num=zmq_msg_recv(zmsg, receiver_, 0);
             printf("waiting for you\n");
             if ( num != -1) break;
        }
        printf("end kaishi  jieshou xiaoxi\n");
        std::cout<< "num=="<<num<<std::endl;
        
        char* buf = (char *)zmq_msg_data(zmsg);
        std::cout<< "buf=="<<buf<<std::endl;
        std::cout<< "buf=="<<string(buf)<<std::endl;
        std::cout<< "buf=="<<string(buf).size()<<std::endl;

        int i=0;
        size_t size = zmq_msg_size(zmsg);
        std::cout<< "size=="<<size<<std::endl;

        for (; i < size; ++i) {
           std::cout<< buf[i]<<std::endl;
        }

        zmq_msg_close(zmsg);
        bool more = zmq_msg_more(zmsg);
        delete zmsg;
        if (!more) break;
}
    if(zmq_close(receiver_) != 0)
    {
    printf("zmq_close failed~~\n");
    return;
    }
    zmq_ctx_destroy(context_);
    context_ = nullptr;
    std::cout<< "server end======"<<std::endl;
}     

  int main() {
    //   thread t(RecvMsg);
     std::unique_ptr<std::thread> receiver_thread_ =   std::unique_ptr<std::thread>(new std::thread(RecvMsg));
      for(int i=0;i<5;i++){
            cout << "main hanshu" << endl;
      }
    //   t.join();      
    receiver_thread_->join();                                                                                                                                                                                                                  
    cout << "main end========" << endl;
      return 0;
  }     