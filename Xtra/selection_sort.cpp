#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j;
    cin>>n;

    vector<int>vect(n);

    for(i=0; i<vect.size(); i++)
        cin>>vect[i];
    
    for(i=0; i<n; i++)
    {
        int select=vect[i];
        int min=vect[i];
        int ind=i;
        for(j=i; j<n; j++)
        {
            if(vect[j]<min)
            {
                min=vect[j];
                ind=j;
            }
        }
        vect[ind]=select;
        vect[i]=min;
    }
    for(auto show: vect)
        cout<<show<<" ";

    return 0;
}