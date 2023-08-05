#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int x, int y, int z);
    void getData()
    {
        cout << "The value of a is " << a << "\n";
        cout << "The value of b is " << b << "\n";
        cout << "The value of c is " << c << "\n";
        cout << "The value of d is " << d << "\n";
        cout << "The value of e is " << e << "\n";
    }
}shadat;

void Employee::setData(int a1, int b1, int c1)
{
    a = a1, b = b1, c = c1;
}

int main()
{
    //Employee shadat;
    shadat.setData(1, 2, 3);
    // shadat.a = 12; this will throw erros as "a" is private method
    shadat.d = 67;
    shadat.e = 90;
    shadat.getData();

    return 0;
}