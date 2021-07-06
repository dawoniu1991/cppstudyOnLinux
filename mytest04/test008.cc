#include <iostream>
using namespace std; 
enum DataType {
  CHAR, INT8, INT16, INT32, INT64,
  UINT8, UINT16, UINT32, UINT64,
  FLOAT, DOUBLE, OTHER
};

template<typename V, typename W>
bool SameType() {
  return std::is_same<typename std::remove_cv<V>::type, W>::value;
}
/**
 * \brief return the DataType of V
 */
template<typename V>
DataType GetDataType() {
  if (SameType<V, int8_t>()) {
         std::cout<<"111111"<<std::endl;
    return INT8;
  } else if (SameType<V, int16_t>()) {
      std::cout<<"222222"<<std::endl;
    return INT16;
  } else if (SameType<V, int32_t>()) {
      std::cout<<"333333"<<std::endl;
    return INT32;
  } else if (SameType<V, int64_t>()) {
    return INT64;
  } else if (SameType<V, uint8_t>()) {
    return UINT8;
  } else if (SameType<V, uint16_t>()) {
    return UINT16;
  } else if (SameType<V, uint32_t>()) {
    return UINT32;
  } else if (SameType<V, uint64_t>()) {
    return UINT64;
  } else if (SameType<V, float>()) {
    return FLOAT;
  } else if (SameType<V, double>()) {
    return DOUBLE;
  } else {
    return OTHER;
  }
}

int main(){
   DataType res= GetDataType<int32_t>();
   std::cout<<res<<std::endl;
}