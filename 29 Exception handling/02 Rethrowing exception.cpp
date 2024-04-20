#include <iostream>
#include <stdexcept>

using namespace std;

// Function that throws an exception
void process(int value) {
    if (value < 0) {
        throw out_of_range("Value out of range");
    }
}

// Function that calls another function and rethrows the exception
void wrapper(int value) {
    try {
        process(value);
    } catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
        // Rethrow the caught exception
        throw; // This rethrows the current exception
    }
}

int main() {
    int num;

    cout << "Enter a non-negative number: ";
    cin >> num;

    try {
        // Call the wrapper function which in turn calls the process function
        wrapper(num);
    } catch (const out_of_range& e) {
        cout << "Main function caught rethrown exception: " << e.what() << endl;
    }

    cout << "End of program" << endl;

    return 0;
}

