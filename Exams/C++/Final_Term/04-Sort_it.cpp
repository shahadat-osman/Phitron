// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;
class School
{
public:
  string nm, s;
  int cls, id, math_marks, eng_marks, total_marks;
};
int main()
{
  int N, i, j;
  cin >> N;

  School st[N], sw;

  for (int i = 0; i < N; i++)
  {
    // cin.ignore();
    cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    st[i].total_marks = st[i].math_marks + st[i].eng_marks;
  }

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N - 1; j++)
    {
      if (st[j].total_marks < st[j + 1].total_marks)
        swap(st[j], st[j + 1]);

      if (st[j].total_marks == st[j + 1].total_marks)
        if (st[j].id > st[j + 1].id)
          swap(st[j], st[j + 1]);
    }
  }

  for (int i = 0; i < N; i++)
  {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << "\n";
  }

  return 0;
}