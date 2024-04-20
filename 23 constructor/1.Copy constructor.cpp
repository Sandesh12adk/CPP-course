/* A constructor is a special type of member function which is invoked at the time of 
the object associated to the class is created. It is special member function because it 
has the same name as that of the class name. 
 Types of constructor are:
 1.Default constructor-> Constructor without any parameters.
 2.Paratermatrized constructor-> Constructor with parameters.
 (paratermatrized constructor padhe paxi construcotr overloading pani janna paryo. vaneko myobj(5,2.3) )
 3.Copy constructor-> */
 // Copy constructor
 /* WHen we need to initialize the variable of the object 
 with the values of the variable of the another object of the
 same class we use the concept of COPY consturctor.It receives the 
 object of the class type as the argument.*/
#include <iostream>
using namespace std;
class demo{
	int a;
	public:
		demo(int b){ 
			a=b;
		}
		nodemo(demo &aa){ // Copy constructor
		a= aa.a;  /* vaneko kasto vanda call garne bela ma jun obj yesma as a argument pass 
		        garinchha tyo obj ko copy banchha k as a new obj so tyo obj ko members lai
				chai hamlya aa.a yesteri access garna sakem k. */
		}
    	void display(){
    		cout<<a<<endl;
		}
};
int main(){
demo obj1(2);
demo obj2(obj1); // This can be written as demo obj2= obj1;
demo obj3 = obj2;
obj1.display();
obj2.display();
obj3.display();
}
