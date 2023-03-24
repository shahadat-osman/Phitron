#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    string DNA;
    getline(cin, DNA);

    int length=1, i, max=0;
    for(i=0; i<DNA.size()-1; i++)
    {
        if(DNA[i]==DNA[i+1])
            length++;
            
        else
        {
            if(length>max)
                max=length;
            
            length=1;
        }
    }
    if(length>max)
        max=length;

    cout<<max<<"\n";

    return 0;
}