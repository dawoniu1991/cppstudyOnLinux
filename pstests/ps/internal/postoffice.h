
#ifndef PS_INTERNAL_POSTOFFICE_H_
#define PS_INTERNAL_POSTOFFICE_H_
#include "ps/internal/env.h"
class Postoffice
{
public:
  /**
   * \brief return the singleton object
   */
  static Postoffice *Get()
  {
    static Postoffice e;
    return &e;
  }

  void Start(int customer_id, const char *argv0, const bool do_barrier);

private:
  Postoffice();
  std::shared_ptr<Environment> env_ref_;
};

#endif // PS_INTERNAL_POSTOFFICE_H_