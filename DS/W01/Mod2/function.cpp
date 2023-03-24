#include <bits/stdc++.h>
using namespace std;
// string erase_first_last(string s)
// {
//     s.erase(s.begin());
//     s.pop_back();

//     return s;
// }
// void erase2(string &s)
// {
//     s.erase(s.begin());
//     s.pop_back();
// }
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    // string s;
    // cin>>s;
    // string ans=erase_first_last(s);

    // erase2(s);
    // cout<<s<<"\n";
    // cout<<ans<<"\n";
    int a, b;
    cin >> a >> b;

    swap(a, b);
    cout << a << " " << b << "\n";

    return 0;
}