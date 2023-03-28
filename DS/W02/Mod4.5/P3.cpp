#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;

    getline(cin, S);

    int i;
    for(i=0; i<S.size(); i++)
    {
        if(i%2==0)
            S[i]+=1;
        
        if(S[i]>122)
            S[i]-=26;
    }

    cout<<S<<"\n";

    return 0;
}