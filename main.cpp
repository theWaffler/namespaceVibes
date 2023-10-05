#include "vibes.h"

int main() {
    try {
        vibes::yeet("Got yeeted!"); 
    }
    catch (const vibes::YeetException& e) {
        vibes::print("Caught an exception: " + std::string(e.what()));
    }

    if(vibes::no_cap) {
        vibes::print("No cap, this is fire!"); 
    }

    vibes::spill_or_be_spilled("Lowkey, C++ is fire!");

    vibes::swag squad = {1, 2, 3, 4, 5};
    for(const auto& member : squad) {
        vibes::print(std::to_string(member));
    }

    return 0;
}