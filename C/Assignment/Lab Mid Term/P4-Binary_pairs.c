#include<stdio.h>
int main()
{
    int i, n, t, count;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        for(i=0; i<n; i++)
        {
            if(str[i]=='0' && str[i+1]=='1')
                count++;
            else if(str[i]=='1' && str[i+1]=='0')
                count++;
        }
        printf("%d\n", count);
        count=0;
    }
}