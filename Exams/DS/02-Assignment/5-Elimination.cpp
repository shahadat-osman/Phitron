// Shahadat Osman
//  Date: 06-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> s;
        for (auto c : str)
        {
            if (s.empty())
            {
                s.push(c);
            }
            else if (c == '1' && s.top() == '0')
            {
                s.pop();
            }
            else
            {
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