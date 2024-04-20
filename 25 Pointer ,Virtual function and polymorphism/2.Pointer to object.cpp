#include<iostream>
using namespace std;
class demo{
	string name;
	int roll_no;
	public:
		void getdata(string Name, int ROll_no);
		void display();
};
void demo::getdata(string Name, int Roll_no){
	name= Name;
	roll_no= Roll_no;
}
void demo::display(){
	cout<< "Student name"<<"student ROll_NO"<<endl;
	cout<<name<<""<<roll_no;
}
int main(){
	demo myobj;
	demo *ptr; // Declaration of the pointer
	ptr= &myobj; // Initialization of the pointer
	string student_name;
	int student_roll;
	cout<<"Enter the name of the student: "<<endl;
	cin>> student_name;
	cout<<"Enter student ROll_no:"<<endl;
	cin>> student_roll;
	(*ptr).getdata(student_name,student_roll);
	ptr->display();
	return 0;
}
