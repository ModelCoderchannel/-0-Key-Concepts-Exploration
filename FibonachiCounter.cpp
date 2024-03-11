#include <iostream>
#include <cmath>

int countFibonacciNumbersUnderLimit(int limit) {
    double phi = (1 + std::sqrt(5)) / 2;
    int n = static_cast<int>(std::floor(std::log(limit * std::sqrt(5) + 0.5) / std::log(phi))) - 1;
    return n;
}

int main() {
    // Example: Find how many Fibonacci numbers are under 4000000
    int limit = 4000000;
    int result = countFibonacciNumbersUnderLimit(limit);

    std::cout << "The number of Fibonacci numbers under " << limit << " is: " << result << std::endl;

    return 0;
}
