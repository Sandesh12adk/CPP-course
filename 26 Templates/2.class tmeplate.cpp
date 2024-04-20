/* Concept of class template*/
#include<iostream>
using namespace std;
template <class T>
class demo{
	T a,b;
	T SUM;
	public:
	 T sum(T c,T d){
	 	a= c;
	 	b=d;
	 	SUM= a+b;
	 	return SUM;
	 }
};
int main(){
	demo <float>myobj;
  float Result=myobj.sum(2.5,7.4);
    demo <int>myobj2;
    int result= myobj2.sum(2,7);
  cout<< Result<<endl;
   cout<< result<<endl;
	return 0;
}
