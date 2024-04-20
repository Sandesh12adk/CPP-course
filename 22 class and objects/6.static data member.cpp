/* It is initialized to zero, whenever the first object of the 
class is created. No other initialization is permitted.
2. For making any data member static we use the key work static.
3. Only one copy of the static data member is created and shared by all the objects.
*/
#include<iostream>
using namespace std;
class myclass{
	private:
		int x,y;
		static int z;
		public:
			void getdata(int a,int b);
			void putdata();
};
	void myclass:: getdata(int a,int b){
				x=a;
				y=b;
				z=a+3;
			}
			void myclass::putdata(){
				cout<< "x="<< x <<endl << "y=" << y <<endl << "z=" <<z <<endl;
			}
			int myclass::z;// As we said that the static variable is set to 0 when ever the first obj of the class is created what if we want to
			// set the value of static variable to some value so we can assaign the value here like int myclass::z=something;
			 /* As soon as the curly brace of the class is closed we need to write this to say the compiler that 
			 " myclass vanne class  ma int type of 'z' named of variable xa hai*/
			int main(){
				myclass myobj1,myobj2;
      		myobj1.getdata(5,10);
//					myobj2.putdata();
				myobj1.putdata();
				myobj2.getdata(20,30);
					cout<<"_________________"<<endl;
				myobj1.putdata();
				myobj2.putdata();
				return 0;
			}
