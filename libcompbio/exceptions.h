#ifndef COMPBIO_EXCEPTIONS_H
#define COMPBIO_EXCEPTIONS_H

#include <stdexcept>
#include <string>

class NotImplemented : public std::runtime_error
{
    public:
        NotImplemented(const std::string& message) : std::runtime_error(message) { }
};

class AlphabetException : public std::runtime_error
{
    public:
        AlphabetException(const std::string& message) : std::runtime_error(message) { }
};

#endif
