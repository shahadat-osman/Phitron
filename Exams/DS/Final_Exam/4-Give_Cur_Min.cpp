// Shahadat Osman
// Date: 24-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> myPQ;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        myPQ.push(x);
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int cmnd;
        cin >> cmnd;
        if (cmnd == 0)
        {
            long long x;
            cin >> x;
            myPQ.push(x);
            cout << myPQ.top() << "\n";
        }
        else if (cmnd == 1)
        {
            if (myPQ.empty())
                cout << "Empty\n";
            else
                cout << myPQ.top() << "\n";
        }
        else if (cmnd == 2)
        {
            if (!myPQ.empty())
                myPQ.pop();
            if (myPQ.empty())
                cout << "Empty\n";
            else
                cout << myPQ.top() << "\n";
        }
    }

    return 0;
}