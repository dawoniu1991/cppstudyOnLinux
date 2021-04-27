#ifndef PS_PS_H_
#define PS_PS_H_
#include "internal/postoffice.h"
#include <iostream>
namespace ps {

inline void Start(int customer_id, const char* argv0 = nullptr) {
  std::cout<<"=======11111========"<<std::endl;
  Postoffice::Get()->Start(customer_id, argv0, true);
   std::cout<<"=======11111 end========"<<std::endl;
}

}

#endif 