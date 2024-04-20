/*A private member function is a function defined within the private section of a 
class.Just like private data members, private functions cannot be accessed using the 
dot operator from outside the class.They can only be invoked by functions
within the public section of the class.*/
#include<iostream>
using namespace std;
class myclass {
	private:
		int a;
		void display(){
			cout <<a;
		}
		public:
			void read(int a);
};
void myclass::read(int a){
	this->a=a;
	display();
}
int main(){
	myclass aa;
	aa.read(5);
	return 0;
}
