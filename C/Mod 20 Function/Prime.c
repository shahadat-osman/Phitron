#include<stdio.h>
int is_prime(int p)
{
    int i;
    if(p==1)
        return 0;
    else if(p==2)
        return 1;

    for(i=2; i<p; i++)
    {
        if(p%i==0)
            return 0;
    }

    return 1;
}
int main()
{
    int prime, numb;
    scanf("%d", &numb);

    prime= is_prime(numb);

    if(prime==1)
        printf("%d is a prime number.\n", numb);
    else 
        printf("%d is a composite number.\n", numb);

    return 0;
}