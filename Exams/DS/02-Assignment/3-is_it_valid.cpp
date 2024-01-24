// Shahadat Osman
//  Date: 06-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> s;

        int sz = str.size();

        for (int i = 0; i < sz; i++)
        {
            char c = str[i];

            if (s.empty())
            {
                s.push(c);
            }
            else if (!s.empty())
            {
                if (c == '0' && s.top() == '1')
                {
                    s.pop();
                }
                else if (c == '1' && s.top() == '0')
                {
                    s.pop();
                }
                else
                    s.push(c);
            }
        }
        if (s.empty())
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}