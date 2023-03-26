#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int i, count=0, ans;
    string S;
    getline(cin, S);

    if(S[0]==S[1] && S[1]==S[2])
    {
        cout<<"1\n";
    }
    else if(S[0]==S[1] || S[1]==S[2] || S[0]==S[2])
    {
        cout<<"3\n";
    }
    else 
    {
        cout<<"6\n";
    }

    
    return 0;
}