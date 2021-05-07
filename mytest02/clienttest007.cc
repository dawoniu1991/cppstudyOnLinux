#include <iostream>
#include <thread>
#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
using namespace std;
  void my_free (void *data, void *hint)
   {
    //   free(data);
      cout<<"free======"<<endl; 
   }

 int main() {
    void *context_ = zmq_ctx_new();
    void *sender = zmq_socket(context_, ZMQ_DEALER);

    // std::string my_id = "ps" + std::to_string(1110008888000);
    // zmq_setsockopt(sender, ZMQ_IDENTITY, my_id.data(), my_id.size());
     
    string address="tcp://127.0.0.1:8888";
    if(zmq_connect(sender, address.c_str()) != 0) {
          printf("zmq_connect failed~~\n");
          return -1;
    }

    zmq_msg_t meta_msg;
    // void *data = malloc(6);
    // memcpy(data, "ABCDEF", 6); 

    char data[10];
   memcpy(data, "qwer567abc", 10);
    int rc = zmq_msg_init_data(&meta_msg, data, 10, my_free, NULL);

    while (true) {
        printf("sending for you\n");
      if (zmq_msg_send(&meta_msg, sender, 0) == 10) break;
      printf("sending for you end\n");
      if (errno == EINTR) continue;
      return -1;
    }
    zmq_close(sender);
    zmq_ctx_destroy(context_);
     cout << "client end========" << endl;
 }