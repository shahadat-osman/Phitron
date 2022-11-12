#include<stdio.h>
int main()
{
    int n, i, j, flag=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {   
        int cons=0, x;
        for(j=1; j<=3; j++)
        {
            scanf("%d", &x);
            cons+=x;
        }
        if(cons>=2)
        flag++;
    }
    printf("%d\n", flag);
}