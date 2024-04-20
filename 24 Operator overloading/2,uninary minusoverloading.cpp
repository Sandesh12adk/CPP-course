/* operator (-) overloading with member function */
#include<iostream>
 using namespace std;
 class myclass{
 	int a,b,c;
 	public:
 		void getdata(int x, int y ,int z){
 			a=x;
 			b=y;
 			c=z;
		 }
		 void display(){
		 	cout<<"a = "<<" "<<a<<" "<< "b= "<< b<< " "<<"c= "<<c<<endl;
		 }
		 void operator--(){
		 	cout<<"Operator overloading function has called:"<<endl;
		 	a=-a;
		 	b=-b;
		 	// Minus nai garna parxa vanne hoina nw feri aaru j pani garna milxa jasto
		 	c= 60;		 }
 };
 int main(){
 	myclass obj;
 	obj.getdata(-2,5,-8);
 	obj.display();
 	--obj;
 	obj.display();
 	return 0;
 }
 
