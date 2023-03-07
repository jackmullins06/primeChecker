#include <iostream>

int promptForInput() {
    int target;

    std::cout << "Please enter a number you would like to check is a prime:  " << std::endl;
    std::cin >> target;

    return target;
}

void checkForPrimes(int input) {
    bool is_prime = true;
    for(int i = 2; i < input; i++) {
        if(input % i == 0) {
            is_prime = false;
            break;
        }
    }
    if(is_prime && input > 1) {
        std::cout << input << " is a prime number!" << std::endl;
    } else {
        std::cout << input << " is not a prime number!" << std::endl;
    }
}


int main() {
    int input = promptForInput();
    checkForPrimes(input);

    return 0;
}