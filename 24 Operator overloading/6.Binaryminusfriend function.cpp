#include<iostream>
using namespace std;
class complex{
	float r,i;
	public:
		void getdata(float a, float b);
		void display();	
		friend complex operator+(complex aa, complex bb);	
};
	void complex::getdata(float a, float b){
			r=a;
			i=b;
		}
			void complex::display(){
			cout<<r<<"+"<<i<<"j"<<endl;
		}
		complex operator+(complex aa, complex bb){
			complex cc;
			cc.r= aa.r + bb.r;
			cc.i= aa.i + bb.i;
			return cc;
		}
		int main(){
			float r1,r2,i1,i2;
			cout<<"Enter the real and imaginery part of the first complex number:"<<endl;
			cin>> r1>>i1;
			cout<<"Enter the real and imaginery part of the second complex number:"<<endl;
			cin>>r2>>i2;
			complex aa,bb,cc;
			aa.getdata(r1,i1);
			bb.getdata(r2,i2);
			cc= aa + bb;
			cout<<r1<<"+"<<i1<<"j"<<" "<<"+"<<" "<<r2<<"+"<<i2<<"j"<<"= ";
			cc.display();
			return 0;
		}
		
