#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 8, b = 9;

    swap(a, b);
    cout << a << " " << b << "\n";

    int mini = min(a, b);
    cout << mini << "\n";

    int maxi = max(a, b);
    cout << maxi << "\n";

    vector<int> as = {9, 5, 3, 7, 6};
    //sort(as.begin(), as.end());
    sort(as.begin()+1, as.begin()+2+1);

    for (int i = 0; i < as.size(); i++)
        cout << as[i] << " ";
    cout << "\n";

    return 0;
}