#include<stdio.h>
int main()
{
    int i, numb, state=0;

    scanf("%d", &numb);

    for(i=2; i<numb; i++)
    {
        if(numb%i==0)
        {
            state=1;
        }
    }
    if(numb==1 || numb==0)
    {
        printf("Not prime and composite\n");
    }
    else if(state==0)
    {
        printf("Prime\n");
    }
    else if(state==1)
    {
        printf("Composite\n");
    }
    return 0;
}