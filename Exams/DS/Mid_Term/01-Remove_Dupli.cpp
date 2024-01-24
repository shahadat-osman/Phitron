// Shahadat Osman
// Date: 19-12-2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a_list;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        a_list.push_back(value);
    }

    a_list.sort();
    a_list.unique();

    for (auto print : a_list)
        cout << print << " ";
    cout << "\n";

    return 0;
}