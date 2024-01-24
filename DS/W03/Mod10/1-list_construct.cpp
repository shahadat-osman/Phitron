// Shahadat Osman
// Date: 18-12-2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist(5, 2);

    mylist.push_back(55);
    mylist.push_front(11);
    mylist.insert(next(mylist.begin(), 1), 44);
    for(int print:mylist)
    {
        cout<<print<<" ";
    }
    cout<<"\n";
    mylist.erase(next(mylist.begin(), 1));
    for(int print:mylist)
    {
        cout<<print<<" ";
    }

    return 0;
}