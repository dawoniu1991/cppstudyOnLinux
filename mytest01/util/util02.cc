#include <iostream>
class test01
{
public:
  /**
   * \brief return the singleton object
   */
  static test01 *Get()
  {
    static test01 e;
    return &e;
  }

  static void start(){
    std::cout<<"=======Start=="<<std::endl;
  }


  test01() {
     std::cout<<"=======test01 product========"<<std::endl;
}
};



// test01::test01() {
//      std::cout<<"=======test01 product========"<<std::endl;
// }