// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, word, s = "Jessica";
    bool matched=false;

    getline(cin, sentence);

    stringstream str(sentence);
    while (str >> word)
    {
        if (word == s)
        {
            matched = true;
            cout << "YES\n";
            break;
        }
        else
            continue;
    }

    if (matched == false)
        cout << "NO\n";

    return 0;
}