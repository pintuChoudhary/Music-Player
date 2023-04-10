#ifndef MEDIAFILE_NOT_FOUND_EXCEPTION
#define MEDIAFILE_NOT_FOUND_EXCEPTION

#include<string>
#include<exception>

class MediaFileNotFoundException: public std::exception{
    private:
    std::string msg;

    public:
    MediaFileNotFoundException(const std::string &msg);
    virtual const char * what() const noexcept;
};

#endif