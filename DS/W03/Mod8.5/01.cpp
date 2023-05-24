#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0; i<n1; i++)
        cin>>arr1[i];
    
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0; i<n2; i++)
        cin>>arr2[i];

    vector<int>final(n1+n2);
    int indx1=0, indx2=0;
    int sz;
    if(n1>n2)
        sz=n1;
    else 
        sz=n2;
    for(int i=0; i<n1+n2; i++)
    {
        if(indx1==n1)
        {
            final[i]=arr2[indx2];
            indx2++;
        }
        else if(indx2==n2)
        {
            final[i]=arr1[indx1];
            indx1++;
        }
        else if(arr1[indx1]>=arr2[indx2])
        {
            final[i]=arr1[indx1];
            indx1++;
        }
        else if(arr1[indx1]<=arr2[indx2])
        {
            final[i]=arr2[indx2];
            indx2++;
        }
    }
    for(auto show: final)
        cout<<show<<" ";

    return 0;
}