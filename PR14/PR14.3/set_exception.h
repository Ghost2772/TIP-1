#ifndef SET_EXCEPTION_H
#define SET_EXCEPTION_H

#include <stdexcept>

class SetException : public std::exception
{
public:
    const char* what() const noexcept override;
};

#endif
