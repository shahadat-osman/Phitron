#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>arr)
{
    if(arr.size()<=1)
        return arr;
    
    int mid = arr.size()/2;

    vector<int>a;
    vector<int>b;

    for(int i=0; i<mid; i++)
    {
        a.push_back(arr[i]);
    }
    for(int i=mid; i<arr.size(); i++)
    {
        b.push_back(arr[i]);
    }

    vector<int>sorted_a = merge(a);
    vector<int>sorted_b = merge(b);
    vector<int>sorted_c;

    int sz=arr.size();

    int ind1=0, ind2=0;
    for(int i=0; i<sz; i++)
    {
        if(ind1==sorted_a.size())
        {
            sorted_c.push_back(sorted_b[ind2]);
            ind2++;
        }
        else if(ind2==sorted_b.size())
        {
            sorted_c.push_back(sorted_a[ind1]);
            ind1++;
        }
        else if((sorted_a[ind1]<=sorted_b[ind2]) || ind2==sorted_b.size())
        {
            sorted_c.push_back(sorted_a[ind1]);
            ind1++;
        }
        else if(sorted_a[ind1]>=sorted_b[ind2])
        {
            sorted_c.push_back(sorted_b[ind2]);
            ind2++;
        }
    }

    return sorted_c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    vector<int>ans = merge(arr);

    for(auto show:ans)
        cout<<show<<" ";

    return 0;
}