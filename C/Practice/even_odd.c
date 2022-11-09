#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int  ara[100];
    int even=0, odd=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(ara[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("e= %d\no= %d\n",even, odd);
}