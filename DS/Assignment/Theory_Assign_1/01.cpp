#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>bubble={7, 2, 13, 2, 11, 4};

    int sz=bubble.size()-1;

    for(int i=0; i<sz; i++)
    {
        cout<<i<<" iteration:\n";
        for(int j=0; j<sz-i; j++)
        {
            if(bubble[j]>bubble[j+1])
                swap(bubble[j], bubble[j+1]);
            
            cout<<"\t";
            for(auto ptr: bubble)
                cout<<ptr<<" ";
            cout<<"\n";
        }
    }

    return 0;
}