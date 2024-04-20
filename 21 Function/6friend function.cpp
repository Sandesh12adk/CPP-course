/* We know that the private section of class is accessable 
only through the public section of the same class. 
What if, we want to give access to private member
to a function outside the class in such circumstace we use the 
concept of friend function.
  KEY POINTS
  1. A friend is not use through the object of the class as it is not the part of
  that class so it is called as a normal function.
  2.A friend can use the resources of a class only 
  using an object of the same class. The same class which 
  you made it as a friend.
  3.Usually a friend function has object as an argument.
  */
#include<iostream>
using namespace std;
class myclass{
	private:
		int a,b;
		
	public:
		void input();
	friend int sum(myclass aa);	
};
  void myclass::input(){
	cout<<" Enter two Numbers."<< endl;
	cin>> a >> b;
}
int sum(myclass aa){
	return(aa.a + aa.b);
	}
int main(){
  myclass bb;
  bb.input();
  cout<< "The sum is " << sum(bb) <<endl;
	return 0;
}
