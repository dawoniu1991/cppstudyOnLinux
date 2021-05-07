#include <iostream>
#include <thread>
#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
using namespace std;


void say() {
   cout << "this is say function print" << endl;
    void *context = zmq_init(1);
    // 与客户端通信的套接字
    void *responder = zmq_socket(context, ZMQ_REP);
    zmq_bind(responder, "tcp://*:7777");
    printf("收到 Hello~~\n");
        // 等待客户端请求
        zmq_msg_t request;
        zmq_msg_init(&request);
        // zmq_msg_recv(&request, &responder, 0);
        int num=1122;
        printf("收到kaishi  jieshou xiaoxi\n");
         while (true) {
             num=zmq_msg_recv(&request, responder, 0);
             printf("waiting for you\n");
             if ( num != -1) break;
        // if (zmq_msg_recv(&request, responder, 0) != -1) break;
        // std::cout<< "dengdaizhong=="<<std::endl;
        }
        printf("end kaishi  jieshou xiaoxi\n");
        std::cout<< "num=="<<num<<std::endl;
        
        char* buf = (char *)zmq_msg_data(&request);
        std::cout<< "buf=="<<buf<<std::endl;
        std::cout<< "buf=="<<string(buf)<<std::endl;
        std::cout<< "buf=="<<string(buf).size()<<std::endl;

        int i=0;
        size_t size = zmq_msg_size(&request);
        std::cout<< "size=="<<size<<std::endl;

        for (; i < size; ++i) {
           std::cout<< buf[i]<<std::endl;
        }

        zmq_msg_close(&request);
    zmq_close(responder);
    zmq_term(context);
    std::cout<< "server end======"<<std::endl;
}     

  int main() {
    //   thread t(say);
     std::unique_ptr<std::thread> receiver_thread_ =   std::unique_ptr<std::thread>(new std::thread(say));
      for(int i=0;i<5;i++){
            cout << "main hanshu" << endl;
      }
    //   t.join();      
    receiver_thread_->join();                                                                                                                                                                                                                  
    cout << "main end========" << endl;
      return 0;
  }     