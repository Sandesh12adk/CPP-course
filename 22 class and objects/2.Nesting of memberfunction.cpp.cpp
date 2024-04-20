/* Nesting of a member function means calling the member function within the 
 member function */
#include<iostream>
using namespace std;

class myclass{
	private:
		int a;
		public:
		void display(){
			cout<< a;
		}
			void read(){
				cout<<" Enter  number:"<<endl;
				cin>> a;
				display();
			}			
};
int main(){
	myclass aa;
	aa.read();
	return 0;
}
