// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int *sort_it(int sz)
{
    int *ary = new int[sz];

    for (int i = 0; i < sz; i++)
        cin >> ary[i];

    sort(ary, ary + sz, greater<int>());

    return ary;
}
int main()
{
    int n;
    cin >> n;

    int *arr = sort_it(n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}