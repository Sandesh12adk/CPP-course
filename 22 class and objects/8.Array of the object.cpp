#include<iostream>
#include<iomanip>
using namespace std;
class employee {
	private:
	string name;
	string address;
	string age;
	double salary;
	public:
	void read(){
		cout<<"Enter the Name,address,age,salary of the employee:"<<endl;
		cin >> name>> address>> age >>salary;
	}
	void display(){
		cout<< name << setw(30) << address <<setw(20)<< age << setw(15)<< salary<< endl;
	}
	
};
int main(){
	int N;
	cout<< "Enter the number of employess"<< endl;
	cin>> N;
	employee myobj[N];
	cout<<"______Employee detail______"<< endl;
	//cout<< "Name" << Setw(30) <<"Addresss" << setw(30) <<"Age" << setw(30) <<"Salary" << endl;

	for(int i=0;i<N;i++){
	myobj[i].read();
	}
		cout << "Name" << setw(30) << "Address" << setw(30) << "Age" << setw(30) << "Salary" << endl;

		for(int i=0;i<N;i++){
		myobj[i].display();	
		}
	return 0;
	
}
