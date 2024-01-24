// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100009];

    while (cin.getline(s, 100009))
    {
        int sz = strlen(s), i, j, temp;

        sort(s, s + sz);

        for (i = 0; i < sz; i++)
        {
            if (s[i] == ' ')
                continue;
            cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}