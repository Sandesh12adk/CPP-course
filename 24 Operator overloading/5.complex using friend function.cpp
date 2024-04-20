/* Complex additon using friend operatior overloading function */
#include<iostream>
using namespace std;
class complex{
	float r,i;
	public:
		void getdata(float real, float imag){
			r= real;
			i= imag;
		}
		void displaydata(){
			cout<<r<<"+"<<"j"<<i<<endl;
		}
		friend complex operator+(complex aa, complex bb);
};
complex operator+(complex aa, complex bb){
	complex cc;
	cc.r= aa.r+ bb.r;
	cc.i= aa.i+ bb.i;
	return cc;
}
int main(){
	complex aa,bb,cc;
	int real1,real2,imag1,imag2;
	cout<<"Enter the real and imaginary part of the first complex number:"<< endl;
	cin>> real1>>imag1;
		cout<<"Enter the real and imaginary part of the second complex number:"<< endl;
	cin>> real2>>imag2;
	aa.getdata(real1,imag1);
	bb.getdata(real2,imag2);
	cc= aa + bb;
	cc.displaydata();
	return 0;
	
	
}
