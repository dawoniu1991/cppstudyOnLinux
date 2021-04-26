// client.cpp
#include "zmq.h"
#pragma comment(lib, "libzmq.lib")
 
// int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
	printf("Connecting to hello world server…\n");
	void *context = zmq_ctx_new();
	void *requester = zmq_socket(context, ZMQ_REQ);
	zmq_connect(requester, "tcp://localhost:5555");
 
	zmq_send(requester, "Hello", 5, 0);
 
	char buffer[11] = { 0 };
	zmq_recv(requester, buffer, 10, 0);
	printf("Received: %s\n", buffer);
 
	zmq_close(requester);
	zmq_ctx_destroy(context);
 
	return 0;
}

