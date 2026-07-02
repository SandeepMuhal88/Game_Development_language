// #include <iostream>
// #include <vector>

// class Tensor1D {
// private:
//     std::vector<float> data;

// public:
//     // Constructor using an initializer list
//     Tensor1D(std::initializer_list<float> init) : data(init) {}

//     // Overloading the '+' operator for element-wise addition
//     Tensor1D operator+(const Tensor1D& other) const {
//         Tensor1D result = *this; // Copy current object
        
//         // Ensure we don't go out of bounds if sizes mismatch
//         size_t minSize = std::min(data.size(), other.data.size());
        
//         for (size_t i = 0; i < minSize; ++i) {
//             result.data[i] += other.data[i];
//         }
//         return result;
//     }

//     void display() const {
//         std::cout << "[ ";
//         for (float val : data) std::cout << val << " ";
//         std::cout << "]\n";
//     }
// };

// int main() {
//     Tensor1D inputA = {1.5, 2.0, 3.1};
//     Tensor1D inputB = {0.5, 1.0, 0.9};

//     // The '+' operator now automatically calls the overloaded function
//     Tensor1D output = inputA + inputB;

//     std::cout << "--- Overloaded Tensor Addition ---" << std::endl;
//     output.display(); 

//     return 0;
// }


#include <iostream>
#include <bitset>

// Define bitmasks using left-shift (<<)
// Each flag occupies exactly one unique bit in the sequence
const uint8_t FLAG_HAS_NAN       = 1 << 0; // 00000001
const uint8_t FLAG_IS_NORMALIZED = 1 << 1; // 00000010
const uint8_t FLAG_OUTLIER       = 1 << 2; // 00000100

int main() {
    std::cout << "--- Bitwise Data Masking ---" << std::endl;
    
    // Initialize a single byte to track all states for a data point
    uint8_t dataState = 0b00000000; 

    // 1. SETTING A FLAG: Use Bitwise OR (|)
    // Turns on the IS_NORMALIZED bit without affecting others
    dataState |= FLAG_IS_NORMALIZED; 
    dataState |= FLAG_OUTLIER;

    // 2. CHECKING A FLAG: Use Bitwise AND (&)
    // Returns non-zero (true) if the specific bit is active
    bool isNormalized = (dataState & FLAG_IS_NORMALIZED);
    bool hasNaN = (dataState & FLAG_HAS_NAN);

    std::cout << "State Binary: " << std::bitset<8>(dataState) << "\n";
    std::cout << "Is Normalized? " << isNormalized << "\n";
    std::cout << "Has NaN values? " << hasNaN << "\n";

    // 3. CLEARING A FLAG: Use Bitwise AND with Bitwise NOT (~&)
    // Turns off the OUTLIER bit without affecting others
    dataState &= ~FLAG_OUTLIER;
    std::cout << "State after clearing outlier: " << std::bitset<8>(dataState) << "\n";

    return 0;
}