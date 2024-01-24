// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    long long arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    for (i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}