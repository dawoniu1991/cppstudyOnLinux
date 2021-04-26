#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
using namespace std;

int main (void)
{
    void *context = zmq_init(1);
 
    // 与客户端通信的套接字
    void *responder = zmq_socket(context, ZMQ_REP);
    zmq_bind(responder, "tcp://*:5555");
    printf("收到 Hello\n");
    while (1) {
        // 等待客户端请求
        zmq_msg_t request;
        zmq_msg_init(&request);
        // zmq_msg_recv(&request, &responder, 0);
        int num=1122;
         while (true) {
             num=zmq_msg_recv(&request, responder, 0);
             if ( num != -1) break;
        // if (zmq_msg_recv(&request, responder, 0) != -1) break;
        // std::cout<< "dengdaizhong=="<<std::endl;
        }
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
         
        // 做些“处理”
        // sleep(1);
 
        // // 返回应答
        // zmq_msg_t reply;
        // zmq_msg_init_size(&reply, 5);
        // memcpy(zmq_msg_data(&reply), "World", 5);
        // zmq_send(responder, &reply, 0);
        // zmq_msg_close(&reply);
    }
    std::cout<< "end"<<std::endl;
    // 程序不会运行到这里，以下只是演示我们应该如何结束
    zmq_close (responder);
    zmq_term (context);
    return 0;
}