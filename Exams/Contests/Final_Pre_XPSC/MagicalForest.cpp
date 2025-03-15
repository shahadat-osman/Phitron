// Shahadat Osman
//  Date: 15-03-2025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 1];
        long long t_sum[n + 1];
        long long sum = 0;
        t_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            t_sum[i] = sum;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << t_sum[r] - t_sum[l - 1] << "\n";
        }
        // for (int i = 0; i <= n; i++)
        //     cout << arr[i] << " " << t_sum[i] << "\n";
    }

    return 0;
}