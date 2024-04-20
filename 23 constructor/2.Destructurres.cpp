/*-> Destructors dont have  arguments and the return type both.
->They destroys the objects once the object goes out of scope
out of scope means tyo object ko use sakkhyo aaba chidena vaya paxi 
memory free hune vayo.
->They are the method with the tiled sign before their name*/
/* A destrucor is a special type of the member function that is automatically invoked at the time the object of the class
goes out of scope or explicitly deleted. The main propose of the destructior is to clean up the resources that the object
may have acquired during its life time.This includes releasing memory, closing fild handles or closing any other task 
imporatint for the proper functioning of the object. The object goes out of the scope when the Block in which it is created ends.
 example #include <iostream>

void someFunction() {
    {
        MyClass obj; // Object created
    } // obj goes out of scope here
} // End of someFunction
*/

#include<iostream>
using namespace std;

class demo{
   static int count;
public:
    demo(){
        count++;
        cout<<"The number of constructor is " << count << endl;
    }
    ~demo(){
        
        cout << count << " Constructor is destroyed" << endl;
        count--;
    }
};
int demo::count;
int main(){
    demo  obj1, obj2, obj3, obj4;
    
    return 0;
}

