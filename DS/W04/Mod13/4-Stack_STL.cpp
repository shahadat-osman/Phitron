// Shahadat Osman
// Date: 02-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stck;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        stck.push(x);
    }

    while(!stck.empty())
    {
        cout<<stck.top()<<"\n";
        stck.pop();
    }

    return 0;
}