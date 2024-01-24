// Shahadat Osman
//  Date: 23-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t=1;

    cin.ignore();
    while (t--)
    {
        string line;
        getline(cin, line);

        string word;
        stringstream str_stream(line);

        map<string, int> myMap;
        pair<string, int> maxx;

        while (str_stream >> word)
        {
            myMap[word]++;

            if (myMap[word] > maxx.second)
                maxx = {word, myMap[word]};
        }
        cout << maxx.first << " " << maxx.second << "\n";
    }

    return 0;
}