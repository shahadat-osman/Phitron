//Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;

    getline(cin, s);

    stringstream str(s);
    
    while(str>>s)
    {
        cout<<s<<"\n";
    }

    return 0;
}