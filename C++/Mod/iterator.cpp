#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st="abcdefghij";

    string:: iterator it;

    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it;
    }

    return 0;
}
/* int main()    //reverse iterator
{
    string st="abcdefghij";

    string:: reverse_iterator it;

    for(it=st.rbegin(); it!=st.rend(); it++)
    {
        cout<<*it;
    }

    return 0;
} */
/* int main()   //auto
{
    string st="abcdefghij";

    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it;
    }

    return 0;
} */