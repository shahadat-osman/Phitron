#include<stdio.h>
int main()
{
    int ara[]={12, 7, 19, 26, 11, 6};

    int m,i;
        m=ara[0];

    for(i=0; i<ara[5]; i++)
    {
        if(ara[i]>m)
        m=ara[i];
    }
    printf("%d\n", m);
}