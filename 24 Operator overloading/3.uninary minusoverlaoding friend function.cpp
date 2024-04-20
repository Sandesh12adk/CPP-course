/*Operator (-) overloading with friend function function */
#include<iostream>
using namespace std;
class myclass{
	int a,b,c;
	public:
		void getdata(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		void display(){
			 cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
		}
		friend void operator-(myclass &aa){
			aa.a=-aa.a;
			aa.b=-aa.b;
			// Minus nai garna parxa vanne hoina nw feri
			aa.c=50;
		}
};
int main(){
	myclass obj;
	obj.getdata(-2,5,-8);
	obj.display();
	-obj;
	obj.display();
	return 0;
}
