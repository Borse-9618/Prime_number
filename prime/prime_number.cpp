#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    // Input an integer from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check if the number is prime and output the result
    if (isPrime(num)) {
        std::cout << num << " is a prime number.\n";
    } else {
        std::cout << num << " is not a prime number.\n";
    }

    return 0;
}
