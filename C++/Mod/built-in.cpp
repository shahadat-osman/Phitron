#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]={3,5,6,1,8};
    int mn=ar[0];
    for(int i=1; i<5; i++)
    {
        mn=max(mn,ar[i]);
    }
    cout<<mn<<"\n";
    return 0;
}