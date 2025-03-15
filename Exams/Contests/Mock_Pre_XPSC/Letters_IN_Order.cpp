#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> mySet;
    for (int i = 0; i < s.size(); i++)
        mySet.insert(s[i]);
    for (auto ch : mySet)
        cout << ch;
    cout << "\n";
    return 0;
}