/*
Time complexity O(log n)
Memory Complexity O(n)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;
    cin >> n >> k;
    vector<int> a(n);

    for (i = 0; i < n; i++)
        cin >> a[i];

    int first = 0, last = n - 1;

    int flag = 0;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (a[mid] == k)
        {
            cout << "YES " << mid << "\n";
            flag = 1;
            break;
        }
        if (a[mid] > k)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    if (flag == 0)
        cout << "NO\n";

    return 0;
}

//  1. array should be sorted either in ascending or descending
//  2. break in half

/*
n
n sorted array
k

10 10
2 4 6 7 8 9 10 11 14 18
 */