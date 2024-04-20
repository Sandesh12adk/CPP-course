/* Cons object 
-> This is the object whose values cannot be changed once initialized */
#include<iostream>
using namespace std;
class demo{
	string fname;
	public:
		demo(string firstname){
			fname = firstname;
		}
		void display()const { // Here normal function cannot excess to the properties of the const class so we need to declear the const function
			cout<< fname<< endl;
		}
};
int main(){
	const demo  myobj("sandesh");
	myobj.display();
	 /*This is not possible
	const demo myobj2("Adhikari");	myobj.display();
	ALos this is not possible: If we had initialized the fname in public section of the class we could change the value of fname as myobj.fname="sandesh" but in case we initilize the 
	const object its value cannot be changed   */
	return 0;
}
