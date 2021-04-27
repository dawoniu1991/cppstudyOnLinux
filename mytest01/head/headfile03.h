#include <ctime>
#include <iostream>
#include <sstream>

class LogMessageFatal
{
public:
    LogMessageFatal(const char *file, int line)
    {
        // log_stream_ << "[" << HumanDate() << "] " << file << ":"
        log_stream_ << "["
                    << "==="
                    << "] " << file << ":"
                    << line << ": ";
    }
    std::ostringstream log_stream_;
    char buffer_[9];

    const char *HumanDate()
    {

        time_t time_value = time(NULL);
        struct tm now;
        localtime_r(&time_value, &now);
        snprintf(buffer_, sizeof(buffer_), "%02d:%02d:%02d", now.tm_hour,
                 now.tm_min, now.tm_sec);
        return buffer_;
    }
};

#define CHECK_NOTNULL(x) \
    ((x) == NULL ? LogMessageFatal(__FILE__, __LINE__).log_stream_ << "Check  notnull: " #x << ' ', (x) : (x))