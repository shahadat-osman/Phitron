#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, q, j, flag;
    cin>>n;
    vector<int>a(n);

    for(i=0; i<n; i++)
        cin>>a[i];
    
    cin>>q;
    vector<int>b(q);
    
    for(i=0; i<q; i++)
        cin>>b[i];

    for(i=0; i<q; i++)
    {
        flag=0;
        for(j=0; j<n; j++)
        {
            if(b[i]==a[j])
                flag=1;
        }
        if(flag==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}