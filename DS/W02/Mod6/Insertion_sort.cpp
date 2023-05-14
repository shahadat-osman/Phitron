//Memory Complexity O(n)
//Time complexity O(n^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;

    cin>>n;

    vector<int>a(n);

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=1; i<n; i++)
    {
        int ind= i;
        while(ind >= 1)
        {
            if(a[ind-1] > a[ind])
            {
                swap(a[ind-1], a[ind]);
                ind--;
            }
            else
                break;
        }
        cout<<"Considering "<<i<<": ";
        for(j=0; j<n; j++)
            cout<<a[j]<<" ";
        cout<<"\n";
    }
    cout<<"After Sorting: ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    return 0;
}