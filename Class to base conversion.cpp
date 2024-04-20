#include <iostream>
using namespace std;
class time1
{
    int hours, minutes;

public:
    time1() {}
    time1(int h)
    {
        hours = h / 60;
        minutes = h % 60;
    }
    operator double()
    {
        double temp = minutes + hours * 60;
        return temp;
    }
};
int main()
{
    time1 t1(122);
    double duration = t1;
    cout << "Duration in minutes: " << duration << endl;
    return 0;
}
