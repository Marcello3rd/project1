#include <iostream>
#include <limits>

int main() {
    int number;
    while (true) {
        std::cout << "Enter an integer value between 5 and 10: ";
        std::cin >> number;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Sorry, you entered an invalid number, please try again\n";
            continue;
        }
        if (number < 5 || number > 10) {
            std::cout << "You entered " << number << ". Please enter a number between 5 and 10.\n";
            continue;
        }
        break;
    }
    std::cout << "Your input value(" << number << ") has been accepted.\n";
    return 0;
}