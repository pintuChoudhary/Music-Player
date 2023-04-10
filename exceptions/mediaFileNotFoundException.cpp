#include"mediaFileNotFoundException.h"

MediaFileNotFoundException::MediaFileNotFoundException(const std::string &msg): msg(msg){}

const char * MediaFileNotFoundException::what() const noexcept {
    return msg.c_str();
}