/* Array within a class means creating the array as a member of the class*/
#include<iostream>
using namespace std;
const int value= 5;
 class myclass{
 	private:
 	int roll_no;	
 	int	marks[value];
 	public:
 		void getdata();
 		void displaydata();
 };
 void myclass::getdata(){
 	cout<< "Enter your roll NO:"<<endl;
 	cin>> roll_no;
 	for(int i=0; i<value;i++){
 	cout<< "Enter the mark in" << i+1<< "subject"<<endl;
 	cin>> marks[i];
 }
 }
 void myclass::displaydata(){
 	int total = 0;
 		for(int i=0; i < value; i++){
  total += marks[i]; 
 }
 cout << "The total marks obatined is:"<< total;
 }
 int main(){
 	myclass aa;
 	aa.getdata();
 	aa.displaydata();
 	return 0;
 }