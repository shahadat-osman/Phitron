#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int>nums(n);

    for(int i =0; i<n; i++)
        cin>>nums[i];

    int i, j, item;

    for(i=1; i<n; i++)
    {
        item= nums[i];
        j=i-1;

        while(j>=0 && nums[j]>item)
        {
            nums[j+1]=nums[j];

            j--;
        }
        nums[j+1]=item;
    }

    for(auto show: nums)
        cout<<show<<" ";

    return 0;
}