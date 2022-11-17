#include<stdio.h>
int main()
{
    int t, i, w, h, n, sheet, flag;
    scanf("%d", &t);
    int  result[t];
    for(i=1; i<=t; i++)
    {
        flag=0;
        scanf("%d %d %d", &w, &h, &n);
        {
        if(w%2==0)
        {
            sheet=((w/2)*h)*2;
        }
        else if(h%2==0)
        {
            sheet=((h/2)*w)*2;
        }
        else if(w%2==0 && h%2==0)
        {
            sheet=((w/2)*h)*2;
        }
        }
        if(sheet>=n)
        {
            result[i]=1;
        }
        else
        {
            result[i]=0;
        }
    }
    for(i=1; i<=t; i++)
    {
        printf("%d", result[i]);
    }
}