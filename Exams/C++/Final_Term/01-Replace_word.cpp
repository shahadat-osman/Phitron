// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s, x;
  cin >> s;
  cin >> x;

  int x_sz = x.size(), s_sz = s.size();
  for (int i = 0; i <= (s_sz - x_sz); i++)
  {
    string sub = s.substr(i, x_sz);

    if (sub == x)
    {
      s.replace(i, x_sz, "#");
    }
    if (s[i] == '\0')
      break;
  }

  cout << s << "\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}