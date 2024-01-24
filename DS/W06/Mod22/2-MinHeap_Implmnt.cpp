// Shahadat Osman
// Date: 17-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> vect = {5, 2, 6, 8, 4, 11, 78, 9};
    // int x;
    // cin >> x;

    // vect.push_back(x);
    int n;
    cin >> n;

    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vect.push_back(x);
        int cur_idx = vect.size() - 1;
        while (cur_idx != 0)
        {
            int par_idx = (cur_idx - 1) / 2;
            if (vect[par_idx] > vect[cur_idx])
            {
                swap(vect[par_idx], vect[cur_idx]);
                cur_idx = par_idx;
            }
            else
                break;
        }
    }

    for (auto print : vect)
        cout << print << " ";
    cout << "\n";
    return 0;
}