#include "head/headfile03.h"

int main()
{
    const char *aa = "nullptr";
    // const char *val = CHECK_NOTNULL(aa);
    // std::cout << "aaaa==== " << val << std::endl;
    int bb = aa == nullptr ? std::cout << "aaaa==== " << "val" << std::endl, 22 : 33;
    std::cout << "bb==== " << bb << std::endl;
}