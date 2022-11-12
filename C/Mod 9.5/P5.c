#include<stdio.h>
int main()
{
    int n, i, target, j, flag=0;
    scanf("%d", &n);

    int Alist[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &Alist[i]);
    }

    scanf("%d", &target);

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(target==Alist[j]+Alist[i])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        printf("Yes\n");
    else 
        printf("No\n");

    return 0;
}