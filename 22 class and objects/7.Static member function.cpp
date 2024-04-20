/* 1. Static member function can access only static data members.
2. Since it is not a part of any objects, it is called using the class  name
*/
#include<iostream>
using namespace std;
class myclass{
	private:
		int x,y;
		static int z;
		public:
			void getdata(int a, int b);
			void putdata();
			static void putstaticdata(){
				cout<<endl<<"z="<<z <<endl;
			//	cout<<"y="<<y <<endl; // if you uncomment this line then syntax error will 
			//  be fired in the code since y is not the static data member.		
			}
};
void myclass::getdata(int a ,int b){
	x=a;
	y=b;
	z+=5;
}
void myclass:: putdata(){
	cout <<"x="<<x <<endl<<"y=" <<y<<endl<<"z=" <<z<<endl;
}
int myclass::z;
int main() {
	myclass myobj;
	myobj.getdata(2,8);
	myobj.putdata();
	myclass::putstaticdata();
	return 0;
	
}
