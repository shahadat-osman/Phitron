#include<stdio.h>
int main()
{
    int n, i, sum=0, count=0, flag=3;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(count<4)
        {
            sum+=i;
            flag--;
        }
        if(flag==0)
        {
            sum-=i;
            count++;
        }
    }
    printf("%d\n", sum);
}

// 1+2+3
// -4-5-6
// 7+8+9
// -10
