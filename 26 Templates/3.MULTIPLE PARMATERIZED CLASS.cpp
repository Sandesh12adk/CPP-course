/* CONCEPT OF MULTIPLE PARAMATERIZED CLASS TEMPLATE */
#include <iostream>
using namespace std;

template <class T, class U>
class Pair {
    T first;
    U second;
public:
    Pair(T f, U s) : first(f), second(s) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(5, 6.7);
    Pair<char, string> p2('a', "Hello");

    cout << "Pair 1: ";
    p1.display();
    cout << "Pair 2: ";
    p2.display();

    return 0;
}

