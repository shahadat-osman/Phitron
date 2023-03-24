#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    
    long long int n, i, x;
    cin>>n;

    vector<long long int> ary;
    ary.resize(n);
    for(i=1; i<n; i++)
    {
        cin>>x;
        ary[x]=1;
    }
    for(i=1; i<=n; i++)
    {
        if(ary[i]==0)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}