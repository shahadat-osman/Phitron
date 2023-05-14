#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    //sort in descending order
    sort(v.begin(), v.end(), greater<int>());
    for(int itr: v)
        cout<<itr<<" ";

    return 0;
}