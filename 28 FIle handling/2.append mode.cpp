#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	fstream fio;
	fio.open("file.txt",ios::app);
	fio<<endl<<"This text is added by opening the file in append mode.";
	fio.close();
	fio.open("file.txt",ios::in);
	string st;
	while(fio.eof()==0){
		getline(fio,st);
		cout<<st<<" ";
	}
	return 0;
}
