#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    int  i, j;
    cin>>n;

    if(n==1)
    {
        cout<<n<<"\n";
        return 0;
    }
    else if(n==2 || n==3)
    {
        cout<<"NO SOLUTION\n";
        return 0;
    }
    else
    {
        for(i=1, j=n-1; i<=n; i++, j-=2)
        {
            if(j<1)
            {
                j=n;
            }
            cout<<j<<" ";
        }
    }
    
    return 0;
}