#include<bits/stdc++.h>
using namespace std;

/* 
    Time complexity O(n + n^2)= O(n^2)
    Memory complexity O(n)
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

    for(int i=0; i<n; i++)
    {
        string ans = "No\n";
        for(int j=i+1; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
                ans="Yes\n";
        }
        cout<<"i = "<<i<<" "<<ans;
    }

    return 0;
}
/* 
index = i, any index j, where j>i and a[i] == a[j]

-> (n-1) + (n-2) + (n-3) +..+2 + 1 + 0 
-> ((n-1)*n)/2
-> (n^2-n)/2

 */