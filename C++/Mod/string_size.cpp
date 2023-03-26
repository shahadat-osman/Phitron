#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st="abcdfegdfgsdfasf";
    cout<<st<<" "<<st.size()<<"\n";

    st.resize(5);
    cout<<st<<" "<<st.size()<<"\n";

    st.clear();
    cout<<st<<" "<<st.size()<<"\n";

    if(st.empty())
        cout<<"Yes\n";
    else 
        cout<<"No\n";

    cout<<st.capacity()<<"\n";
    return 0;
}