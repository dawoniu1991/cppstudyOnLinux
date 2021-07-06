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

   template <typename W>
  explicit SArray(const SArray<W>& arr) { 
    std::cout<<"this is copy function==="<<std::endl;
    *this = arr; }

    SArray<V> segment(size_t begin, size_t end) const {
      std::cout<<"segment function=begin=="<<std::endl;
    SArray<V> ret;
    std::cout<<"segment function=begin111=="<<std::endl;
    ret.ptr_ = std::shared_ptr<V>(ptr_, data() + begin);
    ret.size_ = end - begin;
    ret.capacity_ = end - begin;
    return ret;
  }

  inline V* data() const { return ptr_.get(); }
  inline V back() const {  return data()[size_-1]; }
  inline V front() const { return data()[0]; }
  inline size_t size() const { return size_; }
  inline size_t capacity() const { return capacity_; }

private:
  size_t size_ = 0;
  size_t capacity_ = 0;
  std::shared_ptr<V> ptr_;
};

template <typename W>
SArray<W> fun(){
  SArray<W> qq;
  return qq;
}

int main(){
  using Key = uint64_t;
  int num = 5;
  std::vector<Key> keys(num);
  for (int i = 0; i < num; ++i) {
    keys[i] = i+10;
  }
   std::cout<<"main==="<<keys[0]<<std::endl;
   std::cout<<"main==="<<&(keys[0])<<std::endl;
//    std::cout<<"main==="<<(keys+1)<<std::endl;
//    std::cout<<"main==="<<*(keys+1)<<std::endl;
    std::cout<<"main======begin"<<std::endl;
    SArray<Key> skeys(keys);
    std::cout<<"main==size="<<skeys.size()<<std::endl;
    std::cout<<"main==capacity="<<skeys.capacity()<<std::endl;
    std::cout<<"main==data="<<skeys.data()<<std::endl;
    std::cout<<"main==back="<<skeys.back()<<std::endl;
    std::cout<<"main==front="<<skeys.front()<<std::endl;
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
       SArray<Key> res=skeys.segment(2,4);
         std::cout<<"main==res01="<<std::endl;
       SArray<Key> res01=fun<Key>();
    
    return 0;
}