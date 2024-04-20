// Constargumets
#include <iostream>
using namespace std;

// Function with const arguments
void display(const int x, const double y) {
    // Trying to modify the const parameters will result in a compilation error
    // x = 10;  // Uncommenting this line will cause a compilation error
    // y = 3.14;  // Uncommenting this line will cause a compilation error

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
}

int main() {
    // Declare and initialize variables
    int a = 5;
    double b = 2.71;

    // Call the function with const arguments
    display(a, b);

    return 0;
}
