#include <bits/stdc++.h>
using namespace std;

// memory complexity O(n)

int main()
{
    int n, i, j;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++) // Time complexity O(n^2)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    cout << "After Sort: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}