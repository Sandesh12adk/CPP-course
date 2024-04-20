/* INTRODUCTION 
-> A pointer is a variable which points to the memory address of the another variable.
 Read from book clear and nice introduction of pointer is given there.*/
 #include<iostream>
 using namespace std;
 int main(){
 	int a=5;
 	int *p; // Declaration of pointer
 	p=&a;  // Initialization of pointer
 	int value = *p; // Derefreshing of pointer   This is same as *&a
 	cout<<&a;
 	cout<< endl << value;
 	return 0;
 }
