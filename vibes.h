#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <string>

namespace vibes {
    using swag = std::vector<int>;

    constexpr bool no_cap = true;
    constexpr bool cap = false;

    void print(const std::string& message);

    class YeetException : public std::exception {
    public:
        explicit YeetException(const std::string& message);
        virtual const char* what() const noexcept override;

    private:
        std::string message_;
    };

    void yeet(const std::string& message);
    void spill_or_be_spilled(const std::string& message);
}
