#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, inversion=0, op=0;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            op++;
            if(i<j && arr[i]>arr[j])
            inversion++;
        }
    }
    cout<<inversion<<"\n"<<op;

    return 0;
}