/* Vitrual function ( Run time Polymorphism) 
Jasto pointer to the derived class ma hamlya k k hunxa vanne kura janna parxa rw janyam aaba virtual 
function ma chai kasto hunxa vane base class ko nai pointer ley chai paila ko casting  mathod use na gari run
 time polymorphism ko concept ley chai base classs ko function run garna milxa hai vanne kura ho */
#include<iostream>
using namespace std;
class base{
	int a;
	public:
	   virtual	void getdata(int b){
			a=b;
		}
	    virtual void display(){
			cout<< "This data is of base class"<<endl;
			cout<< a<<endl;
		}
};
class derived: public base{
	int d;
	public:
  void	getdata(int D){
  	d=D;
  }
  void display(){
  	cout<<" This data is of derived class"<<endl;
  	cout<<d<<endl;
  }
};
int main(){
	base myobj1;
	derived myobj2;
	base *bp;
	bp = &myobj2; 
    bp->getdata(5);
	bp->display();
	// So if you want to call the function of the base class then you should use the scoperesolutin operator
	bp->base::getdata(2);
	bp->base::display();
	return 0;
}
/*Note: Try to run this code with out using virtyal kepword in the method of the base class and see the resutl */
