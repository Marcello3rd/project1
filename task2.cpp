#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    int category;

    if (daysUntilExpiration == 0) {
        category = 0;
    } else if (daysUntilExpiration == 1) {
        category = 1;
    } else if (daysUntilExpiration <= 5) {
        category = 2;
    } else if (daysUntilExpiration <= 10) {
        category = 3;
    } else {
        category = 4;
    }

    switch (category) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
            break;
        case 2:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!" << std::endl;
            break;
        case 3:
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            break;
        case 4:
            std::cout << "You have an active subscription." << std::endl;
            break;
    }

    return 0;
}