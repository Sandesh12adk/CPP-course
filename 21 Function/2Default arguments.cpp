// Default arguments
#include<iostream>
using namespace std;
	void myfuntion(int a=5, int b=5, int c=5){
		cout << a + b + c << endl;
	}
		int main(){
	 myfuntion(7,8,9);
	return 0;
}
/*
   Function to demonstrate default arguments.
   If the arguments are not provided during the function call,
   the default values are used. If arguments are provided,
   the provided values override the default ones.
*/