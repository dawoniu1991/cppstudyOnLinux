#include <memory>
#include <iostream>
#include <vector>
#include <string.h>

template<typename V>
class SArray {
 public:
     SArray() { std::cout<< "SArray==gouzao"<<std::endl;}

   explicit SArray(const std::vector<V>& vec) { 
    std::cout<< "SArray==vector"<<std::endl;
    CopyFrom(vec.data(), vec.size()); }

  void CopyFrom(const V* data, size_t size) {
    resize(size);
    memcpy(this->data(), data, size*sizeof(V));
  }

  template <typename Deleter>
  void reset(V* data, size_t size, Deleter del) {
    size_ = size; capacity_ = size; ptr_.reset(data, del);
  }

  /**
   * @brief Resizes the array to size elements
   *
   * If size <= capacity_, then only change the size. otherwise, append size -
   * current_size entries, and then set new value to val
   */
  void resize(size_t size, V val = 0) {
    std::cout<<"resize==size="<<size<<std::endl;
    std::cout<<"resize==size_="<<size_<<std::endl;
    std::cout<<"resize==capacity_="<<capacity_<<std::endl;
    size_t cur_n = size_;
    if (capacity_ >= size) {
      size_ = size;
    } else {
      std::cout<<"resize==data()="<<data()<<std::endl;    
      V* new_data = new V[size+5];
      memcpy(new_data, data(), size_*sizeof(V));
      reset(new_data, size, [](V* data){ delete [] data; });
    }
    if (size <= cur_n) return;
    V* p = data() + cur_n;
    if (val == 0) {
      memset(p, 0, (size - cur_n)*sizeof(V));
    } else {
      for (size_t i = 0; i < size - cur_n; ++i) { *p = val; ++p; }
    }
  }

  inline V* data() const { return ptr_.get(); }

private:
  size_t size_ = 0;
  size_t capacity_ = 0;
  std::shared_ptr<V> ptr_;
};


int main(){
  using Key = uint64_t;
  int num = 5;
  std::vector<Key> keys(num);

  for (int i = 0; i < num; ++i) {
    keys[i] = i;
  }
    std::cout<<"main======begin"<<std::endl;
    SArray<Key> skeys(keys);
    std::cout<<"main======end"<<std::endl;

    std::shared_ptr<Key> ptr;
   Key* aa=ptr.get();
   std::cout<<"main=====aa="<<aa<<std::endl;
   if(aa==nullptr){
          std::cout<<"main======null"<<std::endl;
   }
      Key* new_data = new Key[num+3] {11,22,33,44,55,66,77,88};
    // Key* new_data = new Key[num+3];
      size_t size_ = 0;
      Key result=*(Key *)(new_data+5);   

    //   Key* tmp=(Key *)(new_data+2);   
    //   Key result=*tmp;
      std::cout<<"main======result="<<result<<std::endl;
      std::cout<<"main======new_data="<<*new_data<<std::endl;
      std::cout<<"main======new_data="<<*(new_data+1)<<std::endl;
      std::cout<<"main======new_data="<<*(new_data+3)<<std::endl;
      std::cout<<"main======new_data=="<<new_data<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+1)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+2)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+3)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+4)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+5)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+6)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+7)<<std::endl;
      std::cout<<"main======new_data=="<<(new_data+8)<<std::endl;
      std::cout<<"main======new_data=="<<*(new_data+7)<<std::endl;
      std::cout<<"main======new_data=="<<*(new_data+8)<<std::endl;
      memcpy(new_data, ptr.get(), size_*sizeof(Key));
      ptr.reset(new_data, [](Key* data){ delete [] data; });
    return 0;
}