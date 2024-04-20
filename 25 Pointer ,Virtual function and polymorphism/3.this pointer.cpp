/* This pointer
This is the keyword which is a pointer which points to the object which invokes the member function 
*/
// first use
#include<iostream>
using namespace std;
class demo{
	string name;
	public:
		void setdata(string name){
		(*this).name= name; // This can be written as this-> name = name
			display();
		}
		void display(){
			cout<<name<<endl;
		}
};
int main(){
	demo myobj;
	myobj.setdata("sandesh adhikari");
	return 0;
}
