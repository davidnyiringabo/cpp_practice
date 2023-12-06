#include<iostream>

int minDistance(int number) {
    int minDist = number;
    int prevFactor = 1;
    for (int i = 2; i <= number; i++) {
        if (number % i == 0) {
            int distance = i - prevFactor;
            if (distance < minDist) {
                minDist = distance;
            }
            prevFactor = i;
        }
    }

    return minDist - 1; // Subtract 1 to get the smallest positive distance
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = minDistance(number);
    std::cout << "The smallest positive distance between two factors is: " << result << std::endl;

    return 0;
}

