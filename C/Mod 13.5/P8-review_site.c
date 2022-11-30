#include<stdio.h>
int main()
{
    int t, i, j, n, upvote;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        int ary[n];

        upvote=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",  &ary[j]);
            if(ary[j]==1 || ary[j]==3)
                upvote++;
            else
                continue;
        }
        printf("%d\n", upvote);
    }
}