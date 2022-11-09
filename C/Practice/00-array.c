#include<stdio.h>
int main()
{
    int i, n, x, ary[50];
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        scanf("%d", &x);
        ary[x]=1;
    }
    for(i=1;i<=n; i++)
    {
        if(ary[i]==0){
        printf("%d", i);
        break;}
    }

}