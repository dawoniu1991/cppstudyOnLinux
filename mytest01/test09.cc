#include "head/headfile03.h"

int main()
{
    const char *aa = nullptr;
    // std::cout << "aaaa==begin==" << aa << std::endl;
    const char *val = CHECK_NOTNULL(aa);
    // std::cout << "aaaa===" << val << std::endl;
    int bb = aa == nullptr ? std::cout << "111== " << "val" << std::endl, std::cout << "111== " << "val" << std::endl,22 :33;
    std::cout << "bb==== " << bb << std::endl;
}