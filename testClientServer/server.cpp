
// server.cpp
#include "zmq.h"
#include <cassert>
#pragma comment(lib, "libzmq.lib")
#include <iostream>
using namespace std;
// int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
	void *context = zmq_ctx_new();
	void *responder = zmq_socket(context, ZMQ_REP);
	cout<<"server==="<<endl;
     if(responder != NULL) {cout << "port===" << endl;}
	// int rc = zmq_bind(responder, "tcp://*:5555");
	string address="tcp://*:5555";
	 int rc = zmq_bind(responder, address.c_str());
	cout<<"rc====="<<rc<<endl;
	assert(rc == 0);
 
	while (1) {
		char buffer[11] = { 0 };
		zmq_recv(responder, buffer, 10, 0);
		printf("Received: %s\n", buffer);
 
		zmq_send(responder, "World", 5, 0);
	}
 
	return 0;
}
