#include <iostream>
#include <vector>

int main() {
    std::vector<int> dataset = {15, 30, 45, 60, 75};

    // 1. Traditional for loop
    // Ideal when index access or modification by position is required
    std::cout << "--- Traditional For Loop ---" << std::endl;
    for (size_t i = 0; i < dataset.size(); ++i) {
        std::cout << "Index [" << i << "] = " << dataset[i] << std::endl;
    }

    // 2. Range-based for loop (C++11+)
    // Ideal for forward iteration through collections without needing the index
    std::cout << "\n--- Range-Based For Loop ---" << std::endl;
    for (const int& value : dataset) {
        std::cout << "Value: " << value << std::endl;
    }

    return 0;
}