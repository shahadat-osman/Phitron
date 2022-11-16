#include<stdio.h>
int main()
{
    int n, m, i, j, flag=0;
    scanf("%d %d", &n, &m);
    char ary[n*m];
    for(i=1; i<=n*m; i++)
    {
        scanf(" %c", &ary[i]);
    }
    for(i=1; i<=n*m; i++)
    {
        flag=0;
        if(ary[i]=='C' || ary[i]=='M' || ary[i]=='Y')
           {
               flag=1;
               break;
           }
        else
            {
                flag=0;
            }
    }
    if(flag==1)
        printf("#Color\n");
    else 
        printf("#Black&White\n");
}