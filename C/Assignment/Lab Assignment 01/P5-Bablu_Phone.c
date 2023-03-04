#include<stdio.h>
int main()
{
    int t, x, i;
    char c;
    scanf("%d", &t);
    int total[t];
    for(i=1; i<=t; i++)
    {
        scanf("%d %c", &x, &c);
        if(x>=80)
        {
            total[i]=(100-x)*3;
        }
        else if(x>=60)
        {
            total[i]=((80-x)*2)+60;
        }
        else if(x<60)
        {
            total[i]=(60-x)+100;
        }
    }
    for(i=1; i<=t; i++)
    {
        printf("%d minutes\n", total[i]);
    }
}