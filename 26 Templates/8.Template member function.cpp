#include<iostream>
using namespace std;

template<typename T>
class demo{
	T a;
	public:
	void getdata(T b){
		a=b;
		cout<<a<<endl;
	}	
};

int main(){
	demo<string> myobj1;
	myobj1.getdata("sandesh");

	cout<<endl;

	demo<int> myobj2;
	myobj2.getdata(5);

	cout<<endl;

	demo<float> myobj3;
	myobj3.getdata(8.58);

	cout<<endl;

	demo<char> myobj4;
	myobj4.getdata('A');

	cout<<endl;

	demo<double> myobj5;
	myobj5.getdata(3.14159);

	cout<<endl;

	demo<bool> myobj6;
	myobj6.getdata(true);

	cout<<endl;

	demo<long> myobj7;
	myobj7.getdata(1234567890);

	cout<<endl;

	demo<long long> myobj8;
	myobj8.getdata(123456789012345);

	cout<<endl;

	demo<unsigned int> myobj9;
	myobj9.getdata(4294967295);

	return 0;
}

