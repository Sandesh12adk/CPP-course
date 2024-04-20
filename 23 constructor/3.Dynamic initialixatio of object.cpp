  /* Run time choosing of the constructors ( Dynimic initialization of the constructos)
-> Yo vaneko k ho vanda as the time the object of the class is created the constructor is invoked what if we can to call the consturctor
 according to the values entered by the user, So for this we use the concept of the dynimic initialization of the object */
 
 #include<iostream>
using namespace std;

class Bankdeposite {
    float principle;
    int year;
    float rate; // To take rate in percentage
    float return_value;

public:
    Bankdeposite(){cout<<8<<endl;} // Yo kina chaiyo vanne kuro bujhyo vane sabai kura janyo yo concept
    Bankdeposite(float p, float R, int y);
    Bankdeposite(float p, int r, int y);
    void display();
};
Bankdeposite::Bankdeposite(float p, float R, int y) {
    principle = p;
    year = y;
    rate = R;
    return_value = p;
    for(int i = 0; i < year; i++) {
        return_value *= (1 + rate);
    }
}

Bankdeposite::Bankdeposite(float p, int r, int y) {
    principle = p;
    year = y;
    rate = float(r) / 100;
    return_value = p;
    for(int i = 0; i < year; i++) {
        return_value *= (1 + rate);
    }
}

void Bankdeposite::display() {
    cout << "The total amount received is: " << return_value << endl;
}

int main() {
	Bankdeposite obj;
    float p;
    int y;
    float R;
    int r;
    char check;
    cout<<"Press d if rate is in decimal press any key if rate is in percentage."<<endl;
    cin>> check;
    if(check == 'd'){
    cout << "Enter the principle amount, year, and the rate (as decimal): " << endl;
    cin >> p >> y >> R;
    obj=Bankdeposite(p,y,R);
    obj.display();
} else {
    cout << "Enter the principle amount, year, and the rate (as percentage): " << endl;
    cin >> p >> y >> r;
    obj= Bankdeposite(p, y,r);
    obj.display();
}
    return 0;
}

