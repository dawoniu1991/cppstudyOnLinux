#include <iostream>
std::string s("1a2b3c4d5e6f7g8h9i1a2b3c4d5e6f7g8ha9i");
void result(const char* p)
{
std::string::size_type position = s.find(p);
if ( position != std::string::npos )
{
std::cout << "Position is : " << position << std::endl;
}
else{
std::cout << "Not found." << std::endl;
}
}
 
int main()
{
result("jk");
result("b3");
 
return 0;
}