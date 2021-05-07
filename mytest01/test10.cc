#include <iostream>
#include <sstream>
int main()
{
    std::ostringstream foo; // out

    // foo.str("Test string");

    foo << 101 << 200<<"qqqwww";
    std::cout << foo.str() << '\n';
}