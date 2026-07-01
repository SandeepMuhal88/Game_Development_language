#include <iostream>
#include <bitset>

int main() {
    int batchSize = 32;
    int dataPoints = 100;
    
    std::cout << "--- 1. Arithmetic Operators ---" << std::endl;
    // Standard mathematical operations
    int totalBatches = dataPoints / batchSize;   // Division (integer truncation)
    int remainder = dataPoints % batchSize;      // Modulo (remainder)
    std::cout << "Total full batches: " << totalBatches << "\n";
    std::cout << "Remaining data points: " << remainder << "\n\n";

    std::cout << "--- 2. Relational & Logical Operators ---" << std::endl;
    float accuracy = 0.85f;
    float threshold = 0.90f;
    bool isOverfitting = false;

    // Evaluating conditions using >, <, ==, !=, && (AND), || (OR), ! (NOT)
    if (accuracy > threshold && !isOverfitting) {
        std::cout << "Model meets production criteria.\n\n";
    } else {
        std::cout << "Model requires further training or tuning.\n\n";
    }

    std::cout << "--- 3. Compound Assignment Operators ---" << std::endl;
    int epoch = 0;
    epoch += 5; // Equivalent to: epoch = epoch + 5
    epoch *= 2; // Equivalent to: epoch = epoch * 2
    std::cout << "Current Epoch after increments: " << epoch << "\n\n";

    std::cout << "--- 4. Bitwise Operators ---" << std::endl;
    // Useful for low-level memory manipulation or flags
    uint8_t featureFlags = 0b00001010; // Binary representation (Decimal 10)
    uint8_t mask = 0b00000010;         // Bit mask to check the second bit

    // Bitwise AND (&), OR (|), XOR (^), Left Shift (<<), Right Shift (>>)
    bool isFeatureActive = (featureFlags & mask); 
    std::cout << "Flags (Binary): " << std::bitset<8>(featureFlags) << "\n";
    std::cout << "Mask applied: " << isFeatureActive << "\n";
    
    // Left shifting multiplies by 2^n
    int shifted = batchSize << 1; 
    std::cout << "Batch size (32) left-shifted by 1: " << shifted << "\n";

    return 0;
}