#include <iostream>
#include <vector>
using namespace std;

void printDivisors(int number) {
    std::vector<int> divisors;

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }

    for (int i = divisors.size() - 1; i >= 0; --i) {
        std::cout << divisors[i] << std::endl;
    }
}

int main() {

    while (true) {
        int number;

        std::cout << "Please enter a positive integer: ";
        std::cin >> number;

        if (number <= 0) {
            std::cout << number << " is not a positive integer.\n";
            
            std::cout << "You can terminate the program by entering a negative number or zero.\n";
            continue; 
        }

        printDivisors(number);

        char choice;
        while (true) {
            std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
            std::cin >> choice;
            
            if (choice == 'Y' || choice == 'y') {
                break; 
            } else if (choice == 'N' || choice == 'n') {
                std::cout << "Thank you for using the program julius. Goodbye!\n";
                return 0; 
            } else {
                std::cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            }
        }
    }

    return 0;
}
