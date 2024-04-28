#include <iostream>
using namespace std;
double squareArea(double side) {
    return side * side;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}
int main() {
    int choice;
    double side, length, width, base, height;

    while (true) {
        cout << "Please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n";
        cout << "Enter selection: ";
        cin >> choice;


        switch (choice) {
            case 1:
                cout << "Enter the side of the square: ";
                cin >> side;
                cout << "Area of the square: " << squareArea(side) << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << rectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << triangleArea(base, height) << endl;
                break;
            case 4:
                cout << "Quitting program." << endl;
                return 0;
            default:
                cout << "Your input was: " << choice << " which is an invalid input\n";
                cout << "Please enter a valid input!!!\n";
                break;
        }
    }
}