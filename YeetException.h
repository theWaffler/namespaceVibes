#pragma once
#include <stdexcept>
#include <string>

namespace vibes {
    class YeetException : public std::runtime_error {
    public:
        YeetException(const std::string& what_arg)
            : std::runtime_error(what_arg) {}
    };
}
