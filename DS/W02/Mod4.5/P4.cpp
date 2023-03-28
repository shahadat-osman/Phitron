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
        for(j=0; j<n2; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }

    return 0;
}