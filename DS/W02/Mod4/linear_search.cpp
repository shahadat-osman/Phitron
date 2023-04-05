#include<bits/stdc++.h>
using namespace std;

/* 
    Time complexity O(2^n)
    Memory complexity O()
*/
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<i<<"\n";
            //break;
        }
    }
    return 0;
}