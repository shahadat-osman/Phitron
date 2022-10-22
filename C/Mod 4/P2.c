#include<stdio.h>
int main()
{
    int sum=0, i;
    
    for(i=1; i<=10; i++)
    {
        printf("%d ", i);
        sum=sum+i;
    }
    printf("\nThe Sum is: %d\n", sum);
    return 0;
}