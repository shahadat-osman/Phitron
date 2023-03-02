#include<stdio.h>
int is_prime(int x);
void display(int n);

int main()
{
    int n, i, j, k, counter=2;
    scanf("%d", &n);
    
    display(n);
    
    return 0;
}

void display(int n)
{
    int i, j, k, counter=2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            while(is_prime(counter))
            {
                counter++;
            }
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    return;
}

int is_prime(int x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
            return 1;
    }

    return 0;
}
