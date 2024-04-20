/*Template function with multiple parameters */
#include <iostream>

template<typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    std::cout << "Multiplication result: " << multiply(num1, num2) << std::endl;

    double num3 = 3;
    double num4 = 2.8;
    std::cout << "Multiplication result: " << multiply(num3, num4) << std::endl;

    return 0;
	}
	/*OK here is the trick first case: when you pass both integers(5,10) as both are integers T and U both are int here.
	second case:When you pass one of the argument float whether first or second like(3,2.8) here as U is float T will converted into float 
	how ?? because 3 is conveted as 3.0 implicilily.so in first case return type is T i.e integer and in second case return type is T i.e float
	NOte: we can also implicitly give the type as multiply<int,int>(5,10)=> Both are integer in this case.
	      multiply<int,float>(3,2.8) both are float in this case */
