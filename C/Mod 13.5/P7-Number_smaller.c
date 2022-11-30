#include<stdio.h>
int main()
{
    int n, m, i, j, select, count;

    scanf("%d %d", &n, &m);
    int n_ary[n+1], m_ary[m+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &n_ary[i]);
    }
    for(i=1; i<=m; i++)
    {
        scanf("%d", &m_ary[i]);
    }
    for(i=1; i<=m; i++)
    {
        count=0;
        select=m_ary[i];
        for(j=1; j<=n; j++)
        {
            if(n_ary[j]<select)
            {
                count++;
            }
            else
                break;
        }
        printf("%d ", count);
    }
}