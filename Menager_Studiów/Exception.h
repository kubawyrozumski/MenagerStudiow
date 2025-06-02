#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <stdexcept>

class NameTooLongException : public std::runtime_error {
public:
    NameTooLongException() : std::runtime_error("Imię jest za długie!") {}
};

#endif
