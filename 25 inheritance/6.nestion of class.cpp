#include<iostream>
using namespace std;
class person{
	public:
	string name;
class address{
	public:
	string place;
	int streetno;
	int houseno;
};
address myobj1;

 void display(){
	cout<< "Name: "<<name <<endl << "From: "<< myobj1.place<< endl <<"street_No: "<< myobj1.streetno <<endl << "house_NO: "<< myobj1.houseno<< endl;
}
};
int main(){
	person myobj2;
	myobj2.name="sandesh adhikari";
	myobj2.myobj1.place="Pokhara";
	myobj2.myobj1.streetno= 7;
	myobj2.myobj1.houseno= 32;
	myobj2.display();
	return 0;
}
