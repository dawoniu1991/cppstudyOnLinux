// client.cpp
#include <zmq.h>
#include <iostream>
#include <string>
using namespace std;
#pragma comment(lib, "libzmq.lib")
 
// int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
	printf("client001 Connecting to hello world server…\n");

    void * context_ = zmq_ctx_new();
	void *sender = zmq_socket(context_, ZMQ_DEALER);

    string address="tcp://*:6666";  
    if (zmq_connect(sender, address.c_str()) != 0) {
       printf("zmq_connect failed\n");
       return 1;
    }

    // while (true) {
    //     if (zmq_msg_send(&data_msg, requester, 0) == data_size) break;
    // }
 
    zmq_msg_t msg;
    int rc = zmq_msg_init_size(&msg, 6);
    cout<<"rc======"<<rc<<endl; 
    /* Fill in message content with 'qqqqqq' */
    memset(zmq_msg_data(&msg), 'q', 6);
    /* Send the message to the socket */
    rc = zmq_msg_send(&msg, sender, 0);
    cout<<"rc======"<<rc<<endl; 

    cout<<"client======"<<endl; 
	zmq_close(sender);
	zmq_ctx_destroy(context_);
 
	return 0;
}

