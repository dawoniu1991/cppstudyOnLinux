#ifndef PS_PS_H_
#define PS_PS_H_
#include "ps/internal/postoffice.h"
namespace ps {

inline void Start(int customer_id, const char* argv0 = nullptr) {
  Postoffice::Get()->Start(customer_id, argv0, true);
}

}

#endif 