
#include "ps/internal/postoffice.h"
#include <iostream>

Postoffice::Postoffice() {
  env_ref_ = Environment::_GetSharedRef();
}

void Postoffice::Start(int customer_id, const char* argv0, const bool do_barrier) {
      std::cout<<"=======11========"<<std::endl;
}