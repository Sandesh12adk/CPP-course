#include<iostream>
using namespace std;
template <typename T, typename U>
void getdata(T a, U b){
	cout<<a<<endl<<b<<endl;
}
int main(){
	getdata("sandesh", 5);
	//We can also write like this
		getdata<int,string>(5, "sandesh");
		//or simply
			getdata(5, "sandesh");
	return 0;
}
