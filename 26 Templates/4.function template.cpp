/* Function template*/
#include <iostream>
using namespace std;

// Function template to find the average of two numbers
template <typename T>
T average(T a, T b) {
    return (a + b) / (2);
}

int main() {
    // Example with integers
    int intAverage = average(10, 20);
    cout << "Average of 10 and 20: " << intAverage << endl;

    // Example with floats
    float floatAverage = average(3.5f, 6.5f);
    cout << "Average of 3.5 and 6.5: " << floatAverage << endl;

    return 0;
}

