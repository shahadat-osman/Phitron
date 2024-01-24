// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;
void func(int *&p)
{
    cout << &p << "\n";
    *p = 20;
}
int main()
{
    int value = 10;
    int *ptr = &value;
    
    cout << value << "\n";

    func(ptr);

    cout << &ptr << "\n";
    cout << value << "\n";

    return 0;
}