#include <iostream>

int main() {
    int temperature = 25;

    std::cout << "--- Temperature Check ---" << std::endl;

    // 1. The 'if' block checks the initial condition
    if (temperature > 30) {
        std::cout << "It's a hot day. Stay hydrated!" << std::endl;
    } 
    // 2. The 'else if' block checks a secondary condition if the first fails
    else if (temperature >= 20) {
        std::cout << "The weather is pleasant." << std::endl;
    } 
    // 3. The 'else' block runs if all previous conditions are false
    else {
        std::cout << "It's cold outside. Grab a jacket!" << std::endl;
    }

    return 0;
}