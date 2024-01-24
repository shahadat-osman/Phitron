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

    queue<string> q;

    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string str;
            cin >> str;
            q.push(str);
        }
        else if (x == 1)
        {
            if (q.empty())
                cout << "Invalid\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }

    return 0;
}