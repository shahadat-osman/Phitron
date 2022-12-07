#include<stdio.h>
int main()
{
    int n, i, sum=0, count=0;
    scanf("%d", &n);
    printf("The odd numbers are: ");
    for(i=1; count<n; i++)
    {
        if(i%2!=0)
        {
            printf("%d ", i);
            sum+=i;
            count++;
        }
    }
    printf("\nThe sum of odd Natural Number up to %d terms: %d\n", n, sum);
}