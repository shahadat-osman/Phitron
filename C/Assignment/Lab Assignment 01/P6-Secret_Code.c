#include<stdio.h>
int main()
{
    int i, t, j, n, flag=1;
    scanf("%d", &t);

    int ans[t];
    for(i=1; i<=t; i++)
    {
        flag=1;
        scanf("%d", &n);
        if(n==1)
            flag=0;

        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
            ans[i]=1;
        else
            ans[i]=0;
    }
    for(i=1; i<=t; i++)
    {
        if(ans[i]==1)
            printf("Yes");
        else
            printf("No");

        printf("\n");
    }
}