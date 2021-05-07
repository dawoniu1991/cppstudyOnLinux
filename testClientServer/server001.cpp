#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>
using namespace std;

int main (void)
{
    void * context_ = zmq_ctx_new();
     // 与客户端通信的套接字
    void *receiver_ = nullptr;
    receiver_ = zmq_socket(context_, ZMQ_ROUTER);
    string address="tcp://*:6666";
    zmq_bind(receiver_, address.c_str());
    printf("收到 begin\n");
   
    while (1) {
        // 等待客户端请求
        printf("收到kaishi  jieshou xiaoxi\n");
        zmq_msg_t* zmsg = new zmq_msg_t;
        // zmq_msg_recv(&request, &responder, 0);
        int num=1122;
         while (true) {
             num=zmq_msg_recv(zmsg, receiver_, 0);
             if ( num != -1) break;
        // if (zmq_msg_recv(&request, responder, 0) != -1) break;
        // std::cout<< "dengdaizhong=="<<std::endl;
        }
        std::cout<< "num=="<<num<<std::endl;
        
        char* buf = (char *)zmq_msg_data(zmsg);
        std::cout<< "buf=="<<buf<<std::endl;
        std::cout<< "buf===="<<string(buf)<<std::endl;
        std::cout<< "buf======"<<string(buf).size()<<std::endl;

        int i=0;
        size_t size = zmq_msg_size(zmsg);
        std::cout<< "size=="<<size<<std::endl;

        for (; i < size; ++i) {
           std::cout<< buf[i]<<std::endl;
        }

        zmq_msg_close(zmsg);
    }
    std::cout<< "end"<<std::endl;
    // 程序不会运行到这里，以下只是演示我们应该如何结束
    zmq_close(receiver_);
    zmq_ctx_destroy(context_);
    return 0;
}