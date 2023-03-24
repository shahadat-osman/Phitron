#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    //cin>> s;          //not applicable for files. cin will only read before space or new line.
    getline(cin, s);
    cout<<s<<"\n";

    return 0;
}