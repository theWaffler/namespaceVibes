#include "vibes.h"

namespace vibes {

    void print(const std::string& message) {
        std::cout << message << std::endl;
    }

    YeetException::YeetException(const std::string& message) 
        : message_(message) {}

    const char* YeetException::what() const noexcept {
        return message_.c_str();
    }

    void yeet(const std::string& message) {
        throw YeetException(message);
    }

    void spill_or_be_spilled(const std::string& message) {
        print("Spilling: " + message);
    }
}
