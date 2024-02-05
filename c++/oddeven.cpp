//WAP to define a function that checks if a number is odd or even.
#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";i
    std::cin >> num;

    if (isEven(num)) {
        std::cout << num << " is even." << std::endl;
    } else {
        std::cout << num << " is odd." << std::endl;
    }

    return 0;
}

