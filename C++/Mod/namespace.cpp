#include<bits/stdc++.h>
using namespace std;

namespace one
{
    void fun()
    {
        cout<<"Im namespace one\n";
    }
}
namespace two
{
    void fun()
    {
        cout<<"Im namespace two\n";
    }
}
// using namespace one;
int main()
{
    one:: fun();

    return 0;
}