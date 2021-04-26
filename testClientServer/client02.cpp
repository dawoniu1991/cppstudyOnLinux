// client.cpp
#include "zmq.h"
#include <iostream>
#include <string.h>
using namespace std;
#pragma comment(lib, "libzmq.lib")
 

  void my_free (void *data, void *hint)
   {
      free(data);
      cout<<"free======"<<endl; 
    //   cout<<"hint======"<<*hint<<endl; 
   }


int main(int argc, char *argv[])
{
	printf("Connecting to hello world server…\n");
	void *context = zmq_ctx_new();
	void *requester = zmq_socket(context, ZMQ_REQ);
	zmq_connect(requester, "tcp://localhost:5555");
    
  
   void *data = malloc(6);
   memcpy(data, "ABCDEF", 6); 
   zmq_msg_t msg;
   int rc = zmq_msg_init_data(&msg, data, 6, my_free, NULL);
   cout<<"rc======"<<rc<<endl; 
   rc = zmq_msg_send(&msg, requester, 0);
    cout<<"rc======"<<rc<<endl; 

    cout<<"client======"<<endl; 
	zmq_close(requester);
    cout<<"zmq_close======"<<endl; 
	zmq_ctx_destroy(context);
    cout<<"zmq_ctx_destroy======"<<endl; 
    cout<<"good job======"<<endl; 
	return 0;
}

