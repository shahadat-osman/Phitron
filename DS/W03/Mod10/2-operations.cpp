// Shahadat Osman
// Date: 19-12-2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {50, 60, 30, 30, 20, 100, 40};

    // mylist.remove(30);
    mylist.sort();
    for (int value : mylist)
    {
        cout << value << " ";
    }
    cout << "\n";
    mylist.sort(greater<int>());
    for (int value : mylist)
    {
        cout << value << " ";
    }
    cout << "\n";

    return 0;
}