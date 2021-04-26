// client.cpp
#include "zmq.h"
#include <iostream>
#include <string.h>
using namespace std;
#pragma comment(lib, "libzmq.lib")
 
// int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
	printf("Connecting to hello world server…\n");
	void *context = zmq_ctx_new();
	void *requester = zmq_socket(context, ZMQ_REQ);
	zmq_connect(requester, "tcp://localhost:5555");
    
    // int data_size=6;
    // string str1="hello";
    // zmq_msg_t data_msg;
    // zmq_msg_init_data(&data_msg, &str1, 6, NULL, NULL);

    // while (true) {
    //     if (zmq_msg_send(&data_msg, requester, 0) == data_size) break;
    // }
 
    zmq_msg_t msg;
    int rc = zmq_msg_init_size(&msg, 6);
    cout<<"rc======"<<rc<<endl; 
    /* Fill in message content with 'AAAAAA' */
    memset(zmq_msg_data(&msg), 'A', 6);
    /* Send the message to the socket */
    rc = zmq_msg_send(&msg, requester, 0);
    cout<<"rc======"<<rc<<endl; 

    cout<<"client======"<<endl; 
	zmq_close(requester);
	zmq_ctx_destroy(context);
 
	return 0;
}

