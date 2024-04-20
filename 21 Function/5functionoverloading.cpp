/*
Function overloading(Compile time polymorphism)
->Function overloading means that the one or more  functions can have the same name
but their number of arguments or the types of the arguments should not be same.*/
#include<iostream>
using namespace std;
void myfunction(int a);
void myfunction (int b, int c);
void myfunction (float a);
int main(){
myfunction(5);
myfunction(3,4);
myfunction(5.8f);
	return 0;
}
 void myfunction(int a){
	cout<< "Funtion with  one int argument" <<endl;
}
 void myfunction(int b, int c){
	cout<< "Funtion with 2 arguments" <<endl;
}
 void myfunction(float a){
	cout<< "Funtion with  1 float argument" <<endl;
}
