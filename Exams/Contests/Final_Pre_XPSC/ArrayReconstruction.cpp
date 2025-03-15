#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        long long arr[n - 2];
        ll sum = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll t_sum;
        cin >> t_sum;
        ll sub = t_sum - sum;
        sub++;
        cout << sub << "\n";
    }

    return 0;
}