/*Swapping using the function template*/
#include<iostream>
using namespace std;

template <typename T>
void swap1(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    float a , b ;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout << "Before swapping a=" << a << " b=" << b << endl;

    swap1(a, b);
    cout << "After swapping a=" << a << " b=" << b << endl;
    return 0;
}

