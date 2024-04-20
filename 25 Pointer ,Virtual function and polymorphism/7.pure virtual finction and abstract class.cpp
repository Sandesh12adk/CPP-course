/* Pure virtual function.
Pure virtual function vaneko chai virtual function nai ho sabai tei ho tera virtual function = 0 garyo vane pure virtual function hunxa 
rw pure virtual function vayeko class lai chai nw abstract class vaninchha re abstract class ko object banauna mildena twra pointer of the object chai 
banauna milxa feri. jasto hamlya vanyam virtual function = 0 vane paxi yo function ko code blok chai derived class ma lakhna paryo k yeti na lakhi derived class
of the abstract class banaiyo vane tyo derived class pani abstract class hunxa rw tesko pani object banauna mildena tera pointer chain milne 
vayo feri*/
#include<iostream>
using namespace std;
class base{
	public:
	    virtual	void getdata(int D)=0;
		virtual void display()= 0;
};
class triangle: public base{
	int d;
  void	getdata(int D){
  	d=D;
  }
  void display(){
  	cout<<" This data is of derived class"<<endl;
  	cout<<d<<endl;
  }
};
int main(){
	base *bp;
	 rectangle myobj;
	bp = &myobj; 
	bp->getdata(5);
	bp->display();
	triangle objtri;
	bp= &objtri;
	bp->area(2,4);
	return 0;
}
