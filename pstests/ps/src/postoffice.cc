

#include "../internal/postoffice.h"
#include <iostream>

Postoffice::Postoffice() {
    std::cout<<"=======3333========"<<std::endl;
  env_ref_ = Environment::_GetSharedRef();
  std::cout<<"=======3333 end========"<<std::endl;
}

void Postoffice::Start(int customer_id, const char* argv0, const bool do_barrier) {
      std::cout<<"=======end========"<<std::endl;
}