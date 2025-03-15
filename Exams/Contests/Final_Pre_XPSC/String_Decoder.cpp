#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string new_str = "";
        int sz = str.size();
        for (int i = 0; i < sz - 1; i += 2)
        {

            char ch = str[i + 1];
            int n = ch - 48;
            while (n--)
            {
                new_str += str[i];
            }
        }
        cout << new_str << "\n";
    }
    return 0;
}