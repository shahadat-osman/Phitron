#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<int> vct(n);
    for (ll i = 0; i < n; i++)
        cin >> vct[i];

    sort(vct.begin(), vct.end(), greater<int>());

    ll prev = vct[0];
    ll t_sum = prev;
    for (ll i = 1; i < n; i++)
    {
        if (prev == 0)
            break;
        if (vct[i] >= prev)
        {
            while (vct[i] >= prev)
            {
                if (vct[i] == 0)
                    break;
                vct[i]--;
            }
            prev = vct[i];
            t_sum += vct[i];
            continue;
        }
        else
        {
            t_sum += vct[i];
            prev = vct[i];
        }
    }

    cout << t_sum << "\n";

    return 0;
}