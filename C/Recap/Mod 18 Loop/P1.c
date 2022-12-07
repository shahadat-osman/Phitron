#include<stdio.h>
#include<math.h>

int main()
{
    int i, sum=0;
    for(i=1; i<=50; i++)
    {
        if(i%2==0)
            sum-=pow(i,2);
        else 
            sum+=pow(i,2);
    }
    printf("%d\n", sum);
}