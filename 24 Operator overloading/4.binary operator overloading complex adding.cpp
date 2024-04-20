/* Overloading binary operator using member function */
#include<iostream>
using namespace std;
class complex{
	float r,i;
	public:
		void getdata(float real,float imag){
			r= real;
			i=imag;
		}
		void displaydata(){
			cout<<r<<"+"<<"j"<<i<<endl;
		}
		complex operator+(complex bb){
			complex cc;
			cc.r= r+ bb.r; // By default aa.r jasto ho hai r vaneko
			cc.i= i+ bb.i;
			return cc;
		}
};
int main(){
	complex aa,bb,cc;
	float real1,imag1,real2,imag2;
	cout<<"Enter the real and imaginary part of fist complex number."<<endl;
	cin >> real1>> imag1;
	cout<<"Enter the real and imaginary part of fist complex number."<<endl;
	cin >> real2>> imag2;
	aa.getdata(real1,imag1);
	bb.getdata(real2,imag2);
	cc= aa + bb;
   cout << "c1=";
    aa.displaydata(); 
    cout << "c2=";
    bb.displaydata(); 
    cout << "Sum=";
    cc.displaydata();
	return 0;
}
