#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    long long int n, i, moves=0;
    cin>>n;

    vector<long long int>ary;
    ary.resize(n);

    for(i=1; i<=n; i++)
        cin>>ary[i];

    for(i=2; i<=n; i++)
    {
        if(ary[i]<ary[i-1])
        {
            moves+=ary[i-1]-ary[i];
            ary[i]=ary[i-1];
        }
    }
    cout<<moves<<"\n";

    return 0;
}