// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;
class School
{
public:
  string nm, s;
  int cls, id;
};
int main()
{
  int N, i, j;
  cin >> N;

  School student[N], sw;

  for (int i = 0; i < N; i++)
  {
    // cin.ignore();
    cin >> student[i].nm >> student[i].cls;
    // cin.ignore();
    cin >> student[i].s >> student[i].id;
  }

  for (i = 0, j = N - 1; i < N / 2; i++, j--)
  {
    swap(student[i].s, student[j].s);
  }

  for (int i = 0; i < N; i++)
  {
    cout << student[i].nm << " " << student[i].cls << " " << student[i].s << " " << student[i].id << "\n";
  }

  return 0;
}