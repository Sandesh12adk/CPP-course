#include<iostream>
using namespace std;
void myfunction( int &a);
int main(){
int num = 5;
myfunction(num);
cout <<num << endl;
return 0;	
}
void myfunction(int &a){
	a= a+ 20;
}