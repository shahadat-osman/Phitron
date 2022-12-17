#include<stdio.h>
void divisor(int n);

int main()
{
    int N, result;
    scanf("%d", &N);

    divisor(N);
    
    return 0;
}

void divisor(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            printf("%d ", i);
    }
}