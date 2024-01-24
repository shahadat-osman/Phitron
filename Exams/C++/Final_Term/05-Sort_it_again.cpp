// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;
class School
{
public:
  string nm, s;
  int cls, id, math_marks, eng_marks;
};
int main()
{
  int N, i, j;
  cin >> N;

  School st[N], sw;

  for (int i = 0; i < N; i++)
  {
    cin >> st[i].nm >> st[i].cls;
    cin >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
  }

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N - 1; j++)
    {
      if (st[j].eng_marks < st[j + 1].eng_marks)
        swap(st[j], st[j + 1]);

      else if (st[j].eng_marks == st[j + 1].eng_marks)
      {
        if (st[j].math_marks < st[j + 1].math_marks)
        {
          swap(st[j], st[j + 1]);
        }
        if (st[j].math_marks == st[j + 1].math_marks)
          if (st[j].id > st[j + 1].id)
            swap(st[j], st[j + 1]);
      }
    }
  }
  for (int i = 0; i < N; i++)
  {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << "\n";
  }

  return 0;
}