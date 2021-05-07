#ifndef HEAD04_FILE_H_
#define HEAD04_FILE_H_

class Hello
{
public:
    std::unique_ptr<std::thread> receiver_thread_;
    void start();
    void receiving();
};

#endif