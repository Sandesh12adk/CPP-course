#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("file.txt");
	fout<<"Learning file handling in c++.";
	fout.close();
	ifstream fin;
	fin.open("file.txt");
	string st;
	while(fin.eof()==0){
		fin>>st;
		cout<<st<<" ";
	}
	return 0;
}

