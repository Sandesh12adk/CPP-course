/*This pointer second use */
#include<iostream>
using namespace std;
class demo{
	string name;
	public:
		demo& getdata(string Name){
			name= Name;
			return *this;
		}
		void display(){
			cout<<name<<endl;
		}
};
int main(){
	demo myobj;
	myobj.getdata("sandesh adhikari").display();
	return 0;
	
}
