#include <bits/stdc++.h>
using namespace std;

int x = 5, y, z;
int func(int a, int b)
{

    return a + b;
}
namespace Info
{
    int x = 10;
    int func(int a, int b)
    {
        return a * b;
    }
}
int main()
{
    int x = Info::func(4, 5);
    cout << x;
    return 0;
}