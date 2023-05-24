#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &a)
{
    if (a.size() <= 1)
        return a;

    int pivot = rand() % (a.size()); // a.size()-1;
    vector<int> b, c, sorted_b, sorted_c, sorted_a;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == pivot)
            continue;
        if (a[i] <= a[pivot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }

    sorted_b = quick_sort(b);
    sorted_c = quick_sort(c);

    for (int i = 0; i < sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);

    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_c.size(); i++)
        sorted_a.push_back(sorted_c[i]);

    return sorted_a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cout << "Size: ";
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans = quick_sort(a);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}