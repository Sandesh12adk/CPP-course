/*Declaring and defining a function inside a class in C++ makes it inline by default. However, if
 you intend to define an inline function outside the class, you must declare it within the class and 
 then provide its definition outside with the 'inline' keyword. The following simple example illustrates
  this concept.*/

#include<iostream>
using namespace std;

class myclass {
private:
    int value;

public:
    void setvalue(int a);    
    int getter();
};

// Definition of setvalue inside the class
inline void myclass::setvalue(int a) {
    value = a;
}

// Definition of getter inside the class
int myclass::getter() {
    return value;
}

int main() {
    myclass aa;

    // Setting value using setvalue
    aa.setvalue(42);

    // Getting and printing the value using getter
    cout << "Value: " << aa.getter() << endl;

    return 0;
}
