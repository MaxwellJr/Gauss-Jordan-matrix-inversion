#include "utils.h"
#include "calculations.h"
#include <iostream>
#include <stdexcept>

int main() {
    try {
        launchInteraction();
    } catch (const std::invalid_argument &arg) {
        std::cerr << arg.what();
        return 1;
    }
    return 0;
}
