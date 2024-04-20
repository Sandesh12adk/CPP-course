/* So far we have studied about the pointer and how we can point the object using the pointer and how to excess the member of the class using
 the pointer. Now in this section we gonna talk about the pointer to the devrived classes.Suppose we have the base class named base
and derived  class named derived  as shown as here: 
class base{
protected:
  int a;
  public:
  void getdata1(int A){
  a=A;
}
  void display1(){
  cout<<a<<endl;
}
class derived: public base {
  int d;
public:
void getdata2(int D){
d=D;
}
void display2(){
cout<< d<<endl;
}
 int main(){
 base myobj;
 base *bp;
 bp = &myobj;

 }
 bp can excess to the base class only, we want to excess to the derived class using pointer so you may think about 
 to this:-
devived myobj2;
bp = &myobj2;
  But this way is halfly correct you know how 
  coz   (*bp).getdata1()  this is valid but
        (*bp).getdata2()  this is not valid.  why?? Because the pointer bp can excess to only to the inherited  member of  base class although
 we have initialize it with the  base class . So how to excess to the members of the derived class which are not inherited from the base class. 
 There are two way to do this.
        
        First way:
   ~ Defind the pointer with the derived class itself like this
    derived *dp;
    dp= &myobj2;
    (*dp).getdata2(); Now this is valid.
      Second way:
      ~ Using the casting method:
       ((derived*)bp)->getdata2(); This is valid.
       
       SO this is the concept and here is the code 
       */
       #include <iostream>
using namespace std;

class base {
protected:
    int a;

public:
    void getdata1(int A) {
        a = A;
    }
    void display1() {
        cout << a << endl;
    }
};

class derived : public base {
    int d;

public:
    void getdata2(int D) {
        d = D;
    }
    void display2() {
        cout << d << endl;
    }
};

int main() {
    base myobj;
    base *bp;
    bp = &myobj;

    // Accessing base class member
    bp->getdata1(5);
    bp->display1();

    derived myobj2;
    bp = &myobj2;

    // Accessing derived class member using pointer to base class
    // Method 1: Defining pointer with derived class itself
    derived *dp;
    dp = &myobj2;
    dp->getdata2(10); // Accessing derived class member
    dp->display2();

    // Method 2: Using casting
    ((derived*)bp)->getdata2(20); // Casting base pointer to derived and accessing derived member
    ((derived*)bp)->display2();

    return 0;
}

       
  
