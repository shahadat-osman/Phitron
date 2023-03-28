#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, i, j;

    cin>>n1;
    vector<int>a(n1);
    for(i=0; i<n1; i++)
        cin>>a[i];

    cin>>n2;
    vector<int>b(n2);
    for(i=0; i<n2; i++)
        cin>>b[i];

    for(i=0; i<n1; i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0; i<n2; i++)
    {
        int flag=1;
        for(j=0; j<n1; j++)
        {
            if(b[i]==a[j])
                flag=0;
        }
        if(flag==1)
            cout<<b[i]<<" ";
    }

    return 0;
}