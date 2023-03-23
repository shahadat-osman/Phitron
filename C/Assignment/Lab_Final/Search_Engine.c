#include<stdio.h>
int main()
{
    int t, n, i, s, flag, ind;
    scanf("%d", &t);
    for(int j=1; j<=t; j++)
    {
        scanf("%d", &n);
        int ary[n];
        for(i=1; i<=n; i++)
            scanf("%d", &ary[i]);
        
        scanf("%d", &s);
        flag=0;
        for(i=1; i<=n; i++)
        {
            if(ary[i]==s)
            {
                flag=1;
                ind=i;
                break;
            }
        }
        if(flag==1)
            printf("Case %d: %d\n", j, ind);
        else
            printf("Case %d: Not Found\n", j);
    }
}
