#include<iostream>
using namespace std;
void divide(int a, int b){
	if(b!=0){
	float result = (float)a/b;
	cout<<result;
}
else{
	throw(b);
}
}
int main(){
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	try{
		divide(a,b);
	}
	catch(int b){
	cout<<"Division by "<<b;	
	}
	return 0;
}
