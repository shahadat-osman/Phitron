// Shahadat Osman
// Date: 20-12-2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int queries;
    cin >> queries;

    while (queries--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            myList.push_front(v);

        else if (x == 1)
            myList.push_back(v);
        else if (x == 2)
        {
            int sz = myList.size();
            if (v < sz)
                myList.erase(next(myList.begin(), v));
        }

        cout << "L -> ";
        for (auto print : myList)
            cout << print << " ";
        cout << "\n";

        myList.reverse();
        cout << "R -> ";
        for (auto print : myList)
            cout << print << " ";
        cout << "\n";

        myList.reverse();
    }

    return 0;
}